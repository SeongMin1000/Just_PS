#include <bits/stdc++.h>

using namespace std;

set<pair<int, int>> v;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long s;
    cin >> s;

    if ((s % 4763) != 0)
    {
        cout << 0;
        return 0;
    }
    else
    {
        s = s / 4763;
        for (int i = 0; i <= 200; i++)
        {
            for (int j = 0; j <= 200; j++)
            {
                if (i * 508 + j * 212 == s)
                {
                    v.insert({i, j});
                }
                else if (i * 508 + j * 305 == s)
                {
                    v.insert({i, j});
                }
                else if (i * 108 + j * 212 == s)
                {
                    v.insert({i, j});
                }
                else if (i * 108 + j * 305 == s)
                {
                    v.insert({i, j});
                }
            }
        }

        if (v.size())
        {
            cout << v.size() << "\n";
            for (auto a : v)
            {
                cout << a.first << " " << a.second << "\n";
            }
        }
        else
        {
            cout << 0;
        }
    }

    return 0;
}