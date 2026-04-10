#include <bits/stdc++.h>
using namespace std;

int dp[1000002];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    vector<int> arr;
    arr.push_back(1);
    for (int i = 2;; i++)
    {
        int next = arr.back() + (4 * i - 3);
        if (next > n)
            break;
        arr.push_back(next);
    }

    for (int i = 1; i <= n; i++)
    {
        dp[i] = 6;
    }

    for (int i = 1; i <= n; i++)
    {
        for (int a : arr)
        {
            if (a > i)
                break;

            dp[i] = min(dp[i], dp[i - a] + 1);
        }
    }
    cout << dp[n];

    return 0;
}