#include <bits/stdc++.h>

using namespace std;

vector<pair<double, double>> v;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        v.push_back({x, y});
    }

    double ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                double area = fabs(
                                  v[i].first * (v[j].second - v[k].second) +
                                  v[j].first * (v[k].second - v[i].second) +
                                  v[k].first * (v[i].second - v[j].second)) /
                              2.0;
                ans = max(area, ans);
            }
        }
    }
    cout << fixed << setprecision(9) << ans;
    return 0;
}