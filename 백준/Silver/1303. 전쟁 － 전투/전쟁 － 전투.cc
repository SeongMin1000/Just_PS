#include <bits/stdc++.h>

using namespace std;

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, -1, 0, 1};

char arr[102][102];
int dis[102][102];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        string s;
        cin >> s;
        for (int j = 0; j < n; j++)
        {
            arr[i][j] = s[j];
        }
    }

    int dw = 0, db = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (!dis[i][j])
            {
                int tmp = 1;
                queue<pair<int, int>> q;
                q.push({i, j});
                dis[i][j] = 1;

                while (!q.empty())
                {
                    auto cur = q.front();
                    q.pop();
                    for (int k = 0; k < 4; k++)
                    {
                        int x = cur.second + dx[k];
                        int y = cur.first + dy[k];

                        if (x < 0 || y < 0 || x >= n || y >= m)
                            continue;
                        if (dis[y][x] || arr[cur.first][cur.second] != arr[y][x])
                            continue;

                        tmp++;
                        q.push({y, x});
                        dis[y][x] = 1;
                    }
                }

                if (arr[i][j] == 'W')
                {
                    dw += (tmp * tmp);
                }
                else
                {
                    db += (tmp * tmp);
                }
            }
        }
    }
    cout << dw << " " << db;
    return 0;
}