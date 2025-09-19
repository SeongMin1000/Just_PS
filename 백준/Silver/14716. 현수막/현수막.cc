#include <bits/stdc++.h>

using namespace std;

int dx[8] = {1, 1, 0, -1, -1, -1, 0, 1};
int dy[8] = {0, 1, 1, 1, 0, -1, -1, -1};

int arr[252][252];
int visited[252][252];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    int ans = 0;
    queue<pair<int, int>> q;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] && !visited[i][j])
            {
                q.push({i, j});
                visited[i][j] = 1;

                while (!q.empty())
                {
                    int curx = q.front().first;
                    int cury = q.front().second;

                    for (int i = 0; i < 8; i++)
                    {
                        int nx = curx + dx[i];
                        int ny = cury + dy[i];

                        if (0 <= nx && nx < n && 0 <= ny && ny < m)
                        {
                            if (!visited[nx][ny] && arr[nx][ny])
                            {
                                q.push({nx, ny});
                                visited[nx][ny] = 1;
                            }
                        }
                    }
                    q.pop();
                }
                ans++;
            }
        }
    }
    cout << ans;
    return 0;
}