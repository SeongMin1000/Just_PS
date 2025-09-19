#include <bits/stdc++.h>

using namespace std;

int arr[65][65];
bool visited[65][65];

int dx[2] = {1, 0};
int dy[2] = {0, 1};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    bool isP = false;
    queue<pair<int, int>> q;
    q.push({0, 0});
    visited[0][0] = 1;

    while (!q.empty())
    {
        int curx = q.front().first;
        int cury = q.front().second;

        for (int i = 0; i < 2; i++)
        {
            int nx = curx + (dx[i] * arr[curx][cury]);
            int ny = cury + (dy[i] * arr[curx][cury]);

            if (0 <= nx && nx <= n && 0 <= ny && ny <= n)
            {
                if (!visited[nx][ny])
                {
                    q.push({nx, ny});
                    visited[nx][ny] = 1;
                }
            }
        }
        auto [chx, chy] = q.front();
        if (arr[chx][chy] == -1)
            isP = 1;
        q.pop();
    }
    if (isP)
        cout << "HaruHaru";
    else
        cout << "Hing";
    return 0;
}