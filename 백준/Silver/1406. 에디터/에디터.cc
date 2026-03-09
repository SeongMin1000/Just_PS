#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    list<char> l;

    string s;
    cin >> s;
    for (auto a : s)
    {
        l.push_back(a);
    }

    auto cur = l.end();

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string a;
        cin >> a;
        if (a == "L")
        {
            if (cur != l.begin())
                cur--;
        }
        else if (a == "D")
        {
            if (cur != l.end())
                cur++;
        }
        else if (a == "B")
        {
            if (cur != l.begin())
            {
                cur--;
                cur = l.erase(cur);
            }
        }
        else
        {
            char add;
            cin >> add;
            l.insert(cur, add);
        }
    }

    for (auto a : l)
    {
        cout << a;
    }

    return 0;
}