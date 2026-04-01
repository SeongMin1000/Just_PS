#include <bits/stdc++.h>
using namespace std;

int arr[100002];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, k;
    cin >> n >> k;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int ans = 0;
    for (int i = 0; i < k; i++)
    {
        ans += arr[i];
    }

    int tmp = ans;
    for (int i = k; i < n; i++)
    {
        tmp += arr[i];
        tmp -= arr[i - k];
        ans = max(tmp, ans);
    }
    cout << ans;
    return 0;
}