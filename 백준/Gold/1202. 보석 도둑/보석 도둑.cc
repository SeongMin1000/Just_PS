#include <bits/stdc++.h>
using namespace std;

multiset<int> bags;
vector<pair<int, int>> jew;
long long ans;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, k;
    cin >> n >> k;

    for (int i = 0; i < n; i++)
    {
        int m, v;
        cin >> m >> v;
        jew.push_back({m, v});
    }
    sort(jew.begin(), jew.end(), [](auto &a, auto &b)
         { return a.second > b.second; });

    for (int i = 0; i < k; i++)
    {
        int c;
        cin >> c;
        bags.insert(c);
    }

    for (int i = 0; i < n; i++)
    {
        int m, v;
        v = jew[i].second;
        m = jew[i].first;

        auto it = bags.lower_bound(m);
        if (it == bags.end())
            continue;
        ans += v;
        bags.erase(it);
    }
    cout << ans;
    return 0;
}