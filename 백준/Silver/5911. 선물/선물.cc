#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, b;
    cin >> n >> b;

    vector<pair<int, int>> arr;
    for (int i = 0; i < n; i++)
    {
        int p, s;
        cin >> p >> s;

        arr.push_back({p, s});
    }

    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        vector<int> tmp;
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                tmp.push_back(arr[j].first / 2 + arr[j].second);
            }
            else
            {
                tmp.push_back(arr[j].first + arr[j].second);
            }
        }
        sort(tmp.begin(), tmp.end());

        int money = b;
        int cnt = 0;
        for (auto a : tmp)
        {
            if (money < a)
                break;
            money -= a;
            cnt++;
        }
        ans = max(ans, cnt);
    }
    cout << ans;
    return 0;
}