#include <bits/stdc++.h>

using namespace std;

long long arr[1000003];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    long long n, m;
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);

    long long start = 0, end = arr[n - 1], sum = 0, mid, ans = -1;
    while (start <= end)
    {
        sum = 0;
        mid = (start + end) / 2;
        for (int i = 0; i < n; i++)
        {
            if (mid < arr[i])
            {
                sum += arr[i] - mid;
            }
        }

        if (sum >= m)
        {
            start = mid + 1;

            if (mid > ans)
                ans = mid;
        }
        else
        {
            end = mid - 1;
        }
    }
    cout << ans;
    return 0;
}