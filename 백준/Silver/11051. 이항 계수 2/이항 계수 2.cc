#include <bits/stdc++.h>
using namespace std;

int c[1002][1002];

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, k;
    cin >> n >> k;

    for (int i = 1; i <= 1000; i++)
    {
        c[i][0] = c[i][i] = 1;
        for (int j = 1; j < i; j++)
        {
            c[i][j] = (c[i - 1][j] + c[i - 1][j - 1]) % 10007;
        }
    }
    cout << c[n][k];
    return 0;
}