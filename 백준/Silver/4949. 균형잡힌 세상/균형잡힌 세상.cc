#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    while (1)
    {
        string s;
        getline(cin, s);

        if (s == ".")
            break;

        stack<int> st;
        bool ans = 1;
        for (auto a : s)
        {
            if (a == '(' || a == '[')
                st.push(a);

            else if (a == ']')
            {
                if (st.empty() || st.top() != '[')
                {
                    ans = 0;
                    break;
                }
                else
                {
                    st.pop();
                }
            }
            else if (a == ')')
            {
                if (st.empty() || st.top() != '(')
                {
                    ans = 0;
                    break;
                }
                else
                {
                    st.pop();
                }
            }
        }

        if (!st.empty())
            ans = 0;
        if (ans)
            cout << "yes\n";
        else
            cout << "no\n";
    }

    return 0;
}