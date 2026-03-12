#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    stack<char> st;
    int ans = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(')
            st.push(s[i]);
        else
        {
            st.pop();
            if (s[i - 1] == '(')
            {
                ans += st.size();
            }
            else
                ans += 1;
        }
    }
    cout << ans;
    return 0;
}