#include <bits/stdc++.h>
using namespace std;

stack<int> tower;
long long ans = 0;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int h;
        cin >> h;

        if (tower.empty())
        {
            tower.push(h);
            continue;
        }

        while (!tower.empty())
        {
            if (tower.top() > h)
            {
                break;
            }
            tower.pop();
        }

        ans += tower.size();

        tower.push(h);
    }
    cout << ans;
    return 0;
}
