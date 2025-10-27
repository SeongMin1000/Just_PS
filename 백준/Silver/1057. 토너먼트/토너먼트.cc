#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k, m;
    cin >> n >> k >> m;

    int ans = 0;
    while (k != m)
    {
        k = (k + 1) / 2;
        m = (m + 1) / 2;
        ans++;
    }
    if (!ans)
        cout << -1;
    else
        cout << ans;
    return 0;
}