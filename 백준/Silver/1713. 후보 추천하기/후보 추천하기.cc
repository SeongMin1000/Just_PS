#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, b;
    cin >> n >> b;

    vector<pair<int, pair<int, int>>> v;
    for (int i = 0; i < b; i++)
    {
        int st;
        cin >> st;

        bool tmp = false;
        for (auto &a : v)
        {
            if (a.first == st)
            {
                a.second.first++;
                tmp = true;
                break;
            }
        }
        if (tmp)
            continue;

        if (v.size() < n)
        {
            v.push_back({st, {1, i}});
        }
        else
        {
            sort(v.begin(), v.end(), [](auto &a, auto &b)
                 {
                    if (a.second.first == b.second.first)
                        return a.second.second < b.second.second;
                    return a.second.first < b.second.first; });

            v.erase(v.begin());
            v.push_back({st, {1, i}});
        }
    }

    sort(v.begin(), v.end());
    for (auto a : v)
    {
        cout << a.first << " ";
    }

    return 0;
}