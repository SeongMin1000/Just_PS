#include <bits/stdc++.h>
using namespace std;

unordered_map<string, string> s;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, m;
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        string site;
        string pw;
        cin >> site >> pw;
        s[site] = pw;
    }

    for (int i = 0; i < m; i++)
    {
        string site;
        cin >> site;

        cout << s[site] << "\n";
    }

    return 0;
}