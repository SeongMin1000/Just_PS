#include <bits/stdc++.h>

using namespace std;

int arr[1000002];
int h[1000002];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int ans = 0;
    for (int i = 1; i < n - 1; i++)
    {
        h[i] = arr[i] + min(arr[i - 1], arr[i + 1]);
        ans = max(ans, h[i]);
    }

    ans = max(ans, max(arr[0], arr[n - 1]));
    cout << ans;

    return 0;
}