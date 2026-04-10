#include <bits/stdc++.h>

using namespace std;

int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};

char arr[602][602];
bool vis[602][602];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    queue<pair<int, int>> q;
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        for (int j = 0; j < m; j++)
        {
            arr[i][j] = s[j];
            if (s[j] == 'I')
            {
                q.push({i, j});
                vis[i][j] = 1;
            }
        }
    }

    int ans = 0;
    while (!q.empty())
    {
        auto cur = q.front();
        q.pop();

        for (int i = 0; i < 4; i++)
        {
            int x = cur.first + dx[i];
            int y = cur.second + dy[i];

            if (x < 0 || y < 0 || x >= n || y >= m)
                continue;
            if (arr[x][y] == 'X')
                continue;
            if (vis[x][y] == 1)
                continue;

            q.push({x, y});
            vis[x][y] = 1;
            if (arr[x][y] == 'P')
            {
                ans++;
            }
        }
    }

    if (ans == 0)
        cout << "TT";
    else
        cout << ans;
    return 0;
}