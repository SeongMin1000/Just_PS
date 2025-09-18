#include <bits/stdc++.h>

using namespace std;

int dx[8] = {1, 1, 0, -1, -1, -1, 0, 1};
int dy[8] = {0, -1, -1, -1, 0, 1, 1, 1};
int arr[51][51];
int dis[51][51];
int ans = 0;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    queue<pair<int, int>> q;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];

            dis[i][j] = -1;
            if (arr[i][j])
            {
                q.push({i, j});
                dis[i][j] = 0;
            }
        }
    }

    while (!q.empty())
    {
        for (int i = 0; i < 8; i++)
        {
            int nx = q.front().first + dx[i];
            int ny = q.front().second + dy[i];

            if (0 <= nx && nx < n && 0 <= ny && ny < m)
            {
                if (dis[nx][ny] == -1)
                {
                    q.push({nx, ny});
                    dis[nx][ny] = dis[q.front().first][q.front().second] + 1;
                }
            }
        }
        q.pop();
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            ans = max(ans, dis[i][j]);
        }
    }
    cout << ans;
    return 0;
}
