#include <bits/stdc++.h>

using namespace std;

string arr[102];
int dis[102][102];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, -1, 0, 1};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];

        for (int j = 0; j < m; j++)
        {
            dis[i][j] = -1;
        }
    }

    queue<pair<int, int>> q;
    q.push({0, 0});
    dis[0][0] = 0;
    while (!q.empty())
    {
        auto cur = q.front();
        q.pop();
        for (int i = 0; i < 4; i++)
        {
            int curx = cur.second + dx[i];
            int cury = cur.first + dy[i];

            if (curx < 0 || cury < 0 || curx >= m || cury >= n)
                continue;
            if (arr[cury][curx] != '1' || dis[cury][curx] >= 0)
                continue;
            dis[cury][curx] = dis[cur.first][cur.second] + 1;
            q.push({cury, curx});
        }
    }

    cout << dis[n - 1][m - 1] + 1;
    return 0;
}