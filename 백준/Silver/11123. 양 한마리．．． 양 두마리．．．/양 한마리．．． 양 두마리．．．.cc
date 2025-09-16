#include <bits/stdc++.h>

using namespace std;

bool grid[102][102];
bool visited[102][102];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int h, w;
        cin >> h >> w;

        for (int j = 0; j < 102; j++)
        {
            for (int k = 0; k < 102; k++)
            {
                grid[j][k] = 0;
                visited[j][k] = 0;
            }
        }
        int ans = 0;

        for (int j = 0; j < h; j++)
        {
            for (int k = 0; k < w; k++)
            {
                char r;
                cin >> r;
                if (r == '#')
                    grid[j][k] = 1;
                else
                    grid[j][k] = 0;
            }
        }

        queue<pair<int, int>> q;
        for (int j = 0; j < h; j++)
        {
            for (int k = 0; k < w; k++)
            {
                if (!visited[j][k] && grid[j][k])
                {
                    q.push({j, k});
                    visited[j][k] = 1;

                    while (!q.empty())
                    {
                        int curx = q.front().first;
                        int cury = q.front().second;
                        for (int p = 0; p < 4; p++)
                        {
                            int nx = curx + dx[p];
                            int ny = cury + dy[p];
                            if (0 <= nx && nx < h && 0 <= ny && ny < w)
                            {
                                if (grid[nx][ny] && !visited[nx][ny])
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
        cout << ans << "\n";
    }
    return 0;
}