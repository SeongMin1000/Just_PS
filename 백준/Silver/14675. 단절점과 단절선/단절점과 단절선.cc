#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> graph[100003];

    for (int i = 0; i < n - 1; i++)
    {
        int a, b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int t, k;
        cin >> t >> k;

        if (t == 1)
        {
            if (graph[k].size() > 1)
            {
                cout << "yes\n";
            }
            else
            {
                cout << "no\n";
            }
        }
        else
        {
            cout << "yes\n";
        }
    }
    return 0;
}