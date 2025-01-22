#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int k;
        cin >> k;
        multiset<int> s;

        for (int j = 0; j < k; j++)
        {
            string op;
            int n;
            cin >> op >> n;

            if (op == "D")
            {
                if (s.empty())
                    continue;
                if (n==1) s.erase(prev(s.end()));
                else s.erase(s.begin());
            }
            else
            {
                s.insert(n);
            }
        }

        if (s.empty())
            cout << "EMPTY\n";
        else
            cout << *prev(s.end()) << " " << *s.begin() << "\n";
    }
    return 0;
}