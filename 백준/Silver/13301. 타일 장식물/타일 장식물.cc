#include <bits/stdc++.h>

using namespace std;

long long arr[100];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    arr[1] = 1;
    arr[2] = 1;
    for (int i = 3; i <= n; i++)
    {
        arr[i] = arr[i - 1] + arr[i - 2];
    }

    if (n & 2 == 1)
        cout << arr[n] * 2 + arr[n - 1] * 2;

    else
        cout << (arr[n] + arr[n - 1]) * 2 + arr[n] * 2;
    return 0;
}