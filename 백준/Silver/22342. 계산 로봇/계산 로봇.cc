#include <bits/stdc++.h>
using namespace std;

int inp[2002][2002];
int store[2002][2002];
int out[2002][2002];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int m, n;
    cin >> m >> n;

    for (int i = 1; i <= m; i++)
    {
        string s;
        cin >> s;
        for (int j = 1; j <= n; j++)
        {
            inp[i][j] = s[j - 1] - '0';
        }
    }

    int ans = 0;
    for (int j = 1; j <= n; j++)
    {
        for (int i = 1; i <= m; i++)
        {
            for (int k = -1; k <= 1; k++)
            {
                if (i + k >= 1 && i + k <= m)
                {
                    store[i][j] = max(store[i][j], out[i + k][j - 1]);
                }
            }
            out[i][j] = inp[i][j] + store[i][j];
            ans = max(ans, store[i][j]);
        }
    }

    cout << ans;
    return 0;
}