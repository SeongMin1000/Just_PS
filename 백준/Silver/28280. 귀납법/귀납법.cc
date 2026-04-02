#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int k;
        cin >> k;

        int ans = 0;
        while (k > 1)
        {
            if (k % 2 == 0)
            {
                k /= 2;
            }
            else
            {
                k += 1;
            }
            ans++;
        }
        cout << ans << "\n";
    }
    return 0;
}