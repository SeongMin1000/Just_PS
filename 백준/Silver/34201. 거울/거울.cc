#include <bits/stdc++.h>

using namespace std;

long long arr[200002];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, s;
    cin >> n >> s;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    long long ans = s;
    if (n % 2 == 0)
    {
        int l = 0, r = n - 1;
        while (l < r)
        {
            ans += 2 * (arr[r] - arr[l]);
            l++;
            r--;
        }
    }
    else
    {
        int l = 0, r = n - 2;
        while (l < r)
        {
            ans += 2 * (arr[l] - arr[r]);
            l++;
            r--;
        }
        ans = 2 * arr[n - 1] - ans;
    }
    cout << ans;
    return 0;
}