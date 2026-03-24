#include <bits/stdc++.h>

using namespace std;

long long pow(long long a, long long b, long long m)
{
    if (b == 1)
        return a % m;

    long long val;
    val = pow(a, b / 2, m);
    val = val * val % m;

    if (b % 2 == 0)
        return val;
    else
        return val * a % m;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, c;
    cin >> a >> b >> c;

    cout << pow(a, b, c);
    return 0;
}