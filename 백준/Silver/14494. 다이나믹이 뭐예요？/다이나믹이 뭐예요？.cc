#include <bits/stdc++.h>

using namespace std;

long long arr[1002][1002];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n, m;
    cin >> n >> m;

    for (long long i = 1; i <= n; i++)
    {
        arr[i][1] = 1;
    }
    for (long long i = 1; i <= m; i++)
    {
        arr[1][i] = 1;
    }

    for (long long i = 2; i <= n; i++)
    {
        for (long long j = 2; j <= m; j++)
        {
            if (!arr[i][j])
            {
                arr[i][j] = ((((arr[i - 1][j] % 1000000007) + (arr[i][j - 1] % 1000000007)) % 1000000007) + (arr[i - 1][j - 1] % 1000000007)) % 1000000007;
            }
        }
    }
    cout << arr[n][m];

    return 0;
}