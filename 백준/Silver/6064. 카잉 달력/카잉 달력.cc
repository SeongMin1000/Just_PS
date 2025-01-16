#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int lcm(int a, int b)
{
    return a / gcd(a, b) * b;
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int m, n, x, y;
        cin >> m >> n >> x >> y;

        if (x == m)
            x = 0;
        if (y == n)
            y = 0;
        int l = lcm(m, n);
        bool isAns = false;
        for (int i = x; i <= l; i += m)
        {
            if (i == 0)
                continue;
            if (i % n == y)
            {
                cout << i << "\n";
                isAns = true;
                break;
            }
        }
        if (!isAns)
            cout << -1 << "\n";
    }

    return 0;
}