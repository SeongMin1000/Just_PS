#include <bits/stdc++.h>
using namespace std;

int arr[1002];
int dp[1002];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        dp[i] = 1;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[j] < arr[i])
            {
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
    }

    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (dp[i] > ans)
            ans = dp[i];
    }
    cout << ans;
    return 0;
}