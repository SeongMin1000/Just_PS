#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, m;
    string s;
    cin >> n >> m >> s;

    string pn;
    for (int i = 0; i < n; i++)
    {
        pn += "IO";
    }
    pn += "I";

    int count = 0;
    auto pos = s.find(pn);

    while (pos != string::npos)
    {
        count++;
        pos = s.find(pn, pos + 1);
    }

    cout << count;

    return 0;
}