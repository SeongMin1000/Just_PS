#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    string s;
    cin >> n >> k >> s;

    if (k > n)
        k = n;

    int x = 0, y = 0;
    while (k--)
    {
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'U')
                y++;
            else if (s[i] == 'D')
                y--;
            else if (s[i] == 'L')
                x--;
            else
                x++;

            if (x == 0 && y == 0)
            {
                cout << "YES";
                return 0;
            }
        }
    }
    cout << "NO";

    return 0;
}