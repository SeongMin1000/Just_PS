#include <bits/stdc++.h>

using namespace std;

int arr[300002];

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
    sort(arr, arr + n, greater<int>());

    int tmp = arr[0] + 1;
    int ans = 1;
    for (int i = 1; i < n; i++)
    {
        if (tmp <= arr[i] + n)
        {
            ans++;
        }
        tmp = max(tmp, arr[i] + i + 1);
    }
    cout << ans;
    return 0;
}