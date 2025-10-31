#include <bits/stdc++.h>

using namespace std;

vector<string> v;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;

        v.push_back(s);
    }

    int maxcnt = 0;
    for (int i = 0; i < v.size(); i++)
    {
        set<int> s;
        for (int j = 0; j < v[i].size(); j++)
        {
            if (v[i][j] == 'Y')
            {
                s.insert(j);
                string k = v[j];
                for (int u = 0; u < k.size(); u++)
                {
                    if (i == u)
                        continue;

                    if (k[u] == 'Y')
                        s.insert(u);
                }
            }
        }
        if (s.size() > maxcnt)
            maxcnt = s.size();
    }

    cout << maxcnt;

    return 0;
}