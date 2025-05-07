#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, m;
    string s;
    cin >> n >> m >> s;

    int ans = 0;
    int chk = 0;
    for (int i = 0; i < m; i++)
    {

        if (s[i] == 'O')
            continue;

        else
        {

            while (s[i + 1] == 'O' && s[i + 2] == 'I')
            {
                chk++;
                if (chk == n)
                {
                    ans++;
                    chk--;
                }
                i += 2;
            }
            chk = 0;
        }
    }
    cout << ans;
    return 0;
}