#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int ans = 0;

    string s;
    cin >> s;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string ring;
        cin >> ring;
        string rr = ring + ring;

        auto pos = rr.find(s);
        if (pos != string::npos)
        {
            ans++;
        }
    }

    cout << ans;
    return 0;
}