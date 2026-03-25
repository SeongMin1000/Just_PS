#include <bits/stdc++.h>

using namespace std;

int arr[1000002];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    arr[0] = 0;
    arr[1] = 1;
    for (int i = 2; i <= n; i++)
    {
        arr[i] = (arr[i - 1] + arr[i - 2]) % 1000000007;
    }

    cout << arr[n];
    return 0;
}