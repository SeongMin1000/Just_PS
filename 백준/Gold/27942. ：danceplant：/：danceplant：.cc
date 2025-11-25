#include <bits/stdc++.h>

using namespace std;

int arr[3002][3002];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> arr[i][j];
        }
    }

    string s = "";
    int ans = 0;
    int left = n / 2, right = n / 2 + 1;
    int top = n / 2, bottom = n / 2 + 1;
    while (left >= 1 && right <= n && top >= 1 && bottom <= n)
    {
        int t = 0;
        int r = 0;
        int d = 0;
        int l = 0;
        int maxSum = 0;
        for (int j = left; j <= right; j++)
        {
            t += arr[top - 1][j];
            d += arr[bottom + 1][j];
        }
        for (int j = top; j <= bottom; j++)
        {
            l += arr[j][left - 1];
            r += arr[j][right + 1];
        }

        maxSum = max({t, r, d, l});
        if (maxSum <= 0)
        {
            break;
        }
        if (maxSum == t)
        {
            s += 'U';
            top--;
        }
        else if (maxSum == d)
        {
            bottom++;
            s += 'D';
        }
        else if (maxSum == l)
        {
            left--;
            s += 'L';
        }
        else if (maxSum == r)
        {
            right++;
            s += 'R';
        }
        ans += maxSum;
    }

    cout << ans << "\n"
         << s << "\n";
    return 0;
}