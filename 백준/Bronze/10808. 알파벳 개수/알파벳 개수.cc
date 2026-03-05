#include <bits/stdc++.h>

using namespace std;

int alp[26];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;
    for (auto c : s)
    {
        alp[c - 'a']++;
    }

    for (int i = 0; i < 26; i++)
    {
        cout << alp[i] << " ";
    }

    return 0;
}