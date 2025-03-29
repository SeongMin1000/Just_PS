#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;

        map<string, int> m;
        for (int j = 0; j < n; j++)
        {
            string cln, cloth;
            cin >> cln >> cloth;

            m[cloth]++;
        }

        int ans = 1;
        for (auto cur : m)
        {
            ans *= (cur.second + 1);
        }
        cout << ans - 1 << "\n";
    }
    return 0;
}