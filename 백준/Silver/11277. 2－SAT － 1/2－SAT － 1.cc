#include <bits/stdc++.h>

using namespace std;

vector<pair<int, int>> v;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    for (int k = 0; k < m; k++)
    {
        int i, j;
        cin >> i >> j;

        v.push_back({i, j});
    }

    for (int i = 0; i < (1 << n); i++)
    {
        bool jud = true;

        for (auto [a, b] : v)
        {
            bool va, vb;
            if (a > 0)
            {
                va = i & (1 << (a - 1));
            }
            else
            {
                va = !(i & (1 << (-a - 1)));
            }

            if (b > 0)
            {
                vb = i & (1 << (b - 1));
            }
            else
            {
                vb = !(i & (1 << (-b - 1)));
            }

            if (!(va || vb))
            {
                jud = false;
                break;
            }
        }
        if (jud)
        {
            cout << 1;
            return 0;
        }
    }
    cout << 0;
    return 0;
}