#include <bits/stdc++.h>
using namespace std;

char building[31][31][31];
int visited[31][31][31];
queue<pair<int, pair<int, int>>> q;

int dx[6] = {1, 0, -1, 0, 0, 0};
int dy[6] = {0, 1, 0, -1, 0, 0};
int dz[6] = {0, 0, 0, 0, 1, -1};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    while (1)
    {
        int ans = 0;
        int l, r, c;
        cin >> l >> r >> c;
        if (l == 0)
            break;

        for (int i = 0; i < l; i++)
        {
            for (int j = 0; j < r; j++)
            {
                for (int k = 0; k < c; k++)
                {
                    visited[i][j][k] = 0;
                }
            }
        }

        while (!q.empty())
            q.pop();

        for (int i = 0; i < l; i++)
        {
            for (int j = 0; j < r; j++)
            {
                for (int k = 0; k < c; k++)
                {
                    cin >> building[i][j][k];
                    if (building[i][j][k] == 'S')
                    {
                        q.push({i, {j, k}});
                        visited[i][j][k] = 1;
                    }
                }
            }
        }

        while (!q.empty())
        {
            int dl = q.front().first;
            int dr = q.front().second.first;
            int dc = q.front().second.second;

            q.pop();

            if (building[dl][dr][dc] == 'E')
            {
                ans = visited[dl][dr][dc] - 1;
                break;
            }

            for (int i = 0; i < 6; i++)
            {
                int nl = dl + dz[i];
                int nr = dr + dy[i];
                int nc = dc + dx[i];

                if (nl < 0 || nr < 0 || nc < 0 || nl >= l || nr >= r || nc >= c)
                    continue;
                if (visited[nl][nr][nc] != 0 || building[nl][nr][nc] == '#')
                    continue;

                visited[nl][nr][nc] = visited[dl][dr][dc] + 1;
                q.push({nl, {nr, nc}});
            }
        }

        if (ans == 0)
        {
            cout << "Trapped!\n";
        }
        else
        {
            cout << "Escaped in " << ans << " minute(s).\n";
        }
    }

    return 0;
}
