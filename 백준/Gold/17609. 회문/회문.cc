#include <bits/stdc++.h>

using namespace std;

bool isPal(string s, int l, int r)
{
    while (l <= r)
    {
        if (s[l] == s[r])
        {
            l++;
            r--;
        }
        else
            return 0;
    }
    return 1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        string s;
        cin >> s;

        int l = 0, r = s.size() - 1;
        int ans = 0;
        while (l <= r)
        {
            if (s[l] == s[r])
            {
                l++;
                r--;
            }
            else if (isPal(s, l + 1, r) || isPal(s, l, r - 1))
            {
                ans = 1;
                break;
            }
            else
            {
                ans = 2;
                break;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}