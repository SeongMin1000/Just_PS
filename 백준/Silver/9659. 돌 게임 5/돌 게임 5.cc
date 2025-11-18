#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n;
    cin >> n;

    if (n % 2 == 1)
        cout << "SK";
    else
        cout << "CY";

    return 0;
}