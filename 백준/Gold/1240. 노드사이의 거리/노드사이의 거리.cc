#include <bits/stdc++.h>

using namespace std;

int arr[1002][1002];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    for (int i = 0; i < n - 1; i++)
    {
        int a, b, d;
        cin >> a >> b >> d;
        arr[a][b] = d;
        arr[b][a] = d;
    }

    for (int i = 0; i < m; i++)
    {
        int s, e;
        cin >> s >> e;

        queue<int> q;
        int dis[1002];
        for (int j = 0; j < 1002; j++)
        {
            dis[j] = -1;
        }

        dis[s] = 0;
        q.push(s);

        while (!q.empty())
        {
            int cur = q.front();
            if (cur == e)
                break;

            for (int j = 1; j <= n; j++)
            {
                if (arr[cur][j] != 0 && dis[j] == -1)
                {
                    dis[j] = dis[cur] + arr[cur][j];
                    q.push(j);
                }
            }
            q.pop();
        }
        cout << dis[e] << '\n';
    }

    return 0;
}