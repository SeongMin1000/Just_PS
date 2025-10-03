#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int k;
    cin >> k;

    vector<int> v(k + 1, 0);
    vector<int> v2(k + 1, 0);

    v[0] = 1;
    v2[0] = 0;
    v[1] = 0;
    v2[1] = 1;

    for (int i = 2; i <= k; i++)
    {
        v[i] = v2[i - 1];
        v2[i] = v2[i - 1] + v[i - 1];
    }

    cout << v[k] << " " << v2[k];

    return 0;
}