#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> a;
    for (int i = 0; i < n; i++)
    {
        int b;
        cin >> b;
        a.push_back(b);
    }

    vector<int> dp(a.size(), 0);
    cout << dp[0] << " ";
    int mini = a[0];
    for (int i = 1; i < n; i++)
    {
        dp[i] = max(dp[i - 1], a[i] - mini);
        mini = min(mini, a[i]);
        cout << dp[i] << " ";
    }
    return 0;
}