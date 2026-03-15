#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    int ans = 0;
    int temp = 1;
    stack<char> st;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(')
        {
            st.push(s[i]);
            temp *= 2;
        }
        else if (s[i] == '[')
        {
            st.push(s[i]);
            temp *= 3;
        }
        else if (s[i] == ')')
        {
            if (st.empty() || st.top() != '(')
            {
                cout << 0;
                return 0;
            }
            if (s[i - 1] == '(')
            {
                ans += temp;
            }
            temp /= 2;
            st.pop();
        }
        else if (s[i] == ']')
        {
            if (st.empty() || st.top() != '[')
            {
                cout << 0;
                return 0;
            }

            if (s[i - 1] == '[')
            {
                ans += temp;
            }
            temp /= 3;
            st.pop();
        }
    }
    if (!st.empty())
        cout << 0;
    else
        cout << ans;
    return 0;
}