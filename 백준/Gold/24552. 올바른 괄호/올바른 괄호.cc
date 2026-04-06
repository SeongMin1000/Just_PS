#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    int left = 0;
    int right = 0;
    for (auto a : s)
    {
        if (a == '(')
        {
            left++;
        }
        else
        {
            right++;
        }
    }

    if (left > right)
    {
        int l = 0, r = 0;
        for (auto a : s)
        {
            if (a == '(')
            {
                l++;
            }
            else
            {
                r++;
            }
            if (l == r)
            {
                l = 0;
                r = 0;
            }
        }
        cout << l;
    }
    else
    {
        int l = 0, r = 0;
        for (int i = s.size() - 1; i >= 0; i--)
        {
            if (s[i] == '(')
            {
                l++;
            }
            else
            {
                r++;
            }
            if (l == r)
            {
                l = 0;
                r = 0;
            }
        }
        cout << r;
    }
    return 0;
}