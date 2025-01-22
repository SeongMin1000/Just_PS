#include <bits/stdc++.h>
using namespace std;

unordered_map<string, int> s;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int k, l;
    cin >> k >> l;

    for (int i = 0; i < l; i++)
    {
        string id;
        cin >> id;
        s[id] = i;
    }

    vector<pair<string, int>> v(s.begin(), s.end());
    sort(v.begin(), v.end(), [](auto &a, auto &b){ return a.second < b.second; });
    for (int i = 0; i < min(k, (int)v.size()); i++)
    {
        cout << v[i].first << "\n";
    }

    return 0;
}