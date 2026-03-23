#include <bits/stdc++.h>

using namespace std;

string arr[1002];
int dis[1002][1002][2];

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
            dis[i][j][0] = -1;
            dis[i][j][1] = -1;
        }
    }

    queue<pair<pair<int, int>, int>> q;
    q.push({{0, 0}, 0});
    dis[0][0][0] = 1;

    while (!q.empty())
    {
        auto cur = q.front();
        q.pop();
        for (int i = 0; i < 4; i++)
        {
            int x = cur.first.second + dx[i];
            int y = cur.first.first + dy[i];
            if (x < 0 || y < 0 || y >= n || x >= m)
                continue;
            if (arr[y][x] == '1')
            {
                if (cur.second == 0 && dis[y][x][1] == -1)
                {
                    dis[y][x][1] = dis[cur.first.first][cur.first.second][0] + 1;
                    q.push({{y, x}, 1});
                }
            }
            else
            {
                if (dis[y][x][cur.second] == -1)
                {
                    dis[y][x][cur.second] = dis[cur.first.first][cur.first.second][cur.second] + 1;
                    q.push({{y, x}, cur.second});
                }
            }
        }
    }

    int ans = -1;
    if (dis[n - 1][m - 1][0] != -1 && dis[n - 1][m - 1][1] != -1)
        ans = min(dis[n - 1][m - 1][0], dis[n - 1][m - 1][1]);
    else if (dis[n - 1][m - 1][0] != -1)
        ans = dis[n - 1][m - 1][0];
    else if (dis[n - 1][m - 1][1] != -1)
        ans = dis[n - 1][m - 1][1];
    cout << ans;

    return 0;
}