#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;

    int ans = -1;
    int nowLen = 0;
    for (int i = 1; i <= n; i++)
    {
        string s = to_string(i);

        nowLen += s.length();
        if (nowLen >= k)
        {
            int pos = nowLen - s.size();
            ans = s[k - pos - 1] - '0';
            break;
        }
    }
    cout << ans << "\n";
    return 0;
}