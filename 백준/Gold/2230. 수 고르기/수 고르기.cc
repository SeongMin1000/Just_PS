#include <bits/stdc++.h>
using namespace std;

int arr[100003];

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, m;
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int mn = (1 << 31) - 1;
    sort(arr, arr + n);
    int en = 0;
    for (int st = 0; st < n; st++)
    {
        while (en < n && arr[en] - arr[st] < m)
            en++;
        if (en == n)
            break;
        mn = min(mn, arr[en] - arr[st]);
    }
    cout << mn;
    return 0;
}