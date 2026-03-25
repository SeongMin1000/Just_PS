#include <bits/stdc++.h>

using namespace std;

char arr[51][51];
bool vis[51][51];

int dx1[6] = {-1, -1, 0, 1, 1, 0};
int dy1[6] = {-1, 0, 1, 0, -1, -1};

int dx2[6] = {-1, -1, 0, 1, 1, 0};
int dy2[6] = {0, 1, 1, 1, 0, -1};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (!vis[i][j] && arr[i][j] == '#')
            {
                queue<pair<int, int>> q;
                q.push({i, j});
                vis[i][j] = 1;

                while (!q.empty())
                {
                    auto cur = q.front();
                    q.pop();
                    for (int k = 0; k < 6; k++)
                    {
                        int x, y;

                        if ((cur.first + 1) % 2 == 1)
                        {
                            y = cur.first + dx1[k];
                            x = cur.second + dy1[k];
                        }
                        else
                        {
                            y = cur.first + dx2[k];
                            x = cur.second + dy2[k];
                        }

                        if (x < 0 || y < 0 || y >= n || x >= m)
                            continue;
                        if (vis[y][x])
                            continue;
                        if (arr[y][x] == '.')
                        {
                            ans++;
                            continue;
                        }

                        vis[y][x] = 1;
                        q.push({y, x});
                    }
                }
            }
        }
    }

    cout << ans;
    return 0;
}