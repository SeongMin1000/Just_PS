#include <bits/stdc++.h>
using namespace std;

vector<int> fr[103];
int ans = 0;
int cnt = 0;

void bfs(int a, int b, bool visit[])
{
    queue<pair<int, int>> q;
    q.push({a, 0});
    visit[a] = 1;

    while (!q.empty())
    {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        if (x == b)
        {
            cnt = y;
            break;
        }

        for (int i = 0; i < fr[x].size(); i++)
        {
            if (!visit[fr[x][i]])
            {
                q.push({fr[x][i], y + 1});
                visit[fr[x][i]] = 1;
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, m;
    cin >> n >> m;

    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        fr[a].push_back(b);
        fr[b].push_back(a);
    }

    int min = 99999999;
    for (int i = 1; i <= n; i++)
    {
        int temp = 0;
        for (int j = 1; j <= n; j++)
        {
            if (i == j)
                continue;

            bool visit[103] = {0};
            bfs(i, j, visit);
            temp += cnt;
            cnt = 0;
        }

        if (min > temp)
        {
            min = temp;
            ans = i;
        }
    }

    cout << ans;
    return 0;
}