#include <bits/stdc++.h>
using namespace std;

bool block[1002];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, z, m;
    cin >> n >> z >> m;

    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        block[x] = 1;
    }

    for (int k = 1; k <= n; k++)
    {
        int cur = 1;
        vector<bool> vis(n + 1, 0);

        while (1)
        {
            if (cur == z)
            {
                cout << k;
                return 0;
            }

            if (block[cur] || vis[cur])
                break;

            vis[cur] = 1;
            cur = (cur + k - 1) % n + 1;
        }
    }
    return 0;
}