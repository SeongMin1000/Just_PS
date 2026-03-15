#include <bits/stdc++.h>

using namespace std;

int arr[502][502];
bool vis[502][502];

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
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    int cnt = 0;
    int area = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] && !vis[i][j])
            {
                queue<pair<int, int>> q;
                vis[i][j] = 1;
                q.push({i, j});
                cnt++;

                int tmp = 0;
                while (!q.empty())
                {
                    auto cur = q.front();
                    for (int k = 0; k < 4; k++)
                    {
                        int nx = cur.second + dx[k];
                        int ny = cur.first + dy[k];
                        if (nx < 0 || nx >= m || ny < 0 || ny >= n)
                            continue;
                        if (vis[ny][nx] || arr[ny][nx] != 1)
                            continue;
                        q.push({ny, nx});
                        vis[ny][nx] = 1;
                    }
                    tmp++;
                    q.pop();
                }
                area = max(tmp, area);
            }
        }
    }
    cout << cnt << "\n"
         << area;
    return 0;
}