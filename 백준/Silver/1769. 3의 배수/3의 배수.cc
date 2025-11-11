#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string n;
    cin >> n;

    int cnt = 0;

    while (n.size() > 1)
    {
        int sum = 0;
        for (auto s : n)
        {
            sum += (s - '0');
        }

        cnt++;
        n = to_string(sum);
    }

    cout << cnt << "\n";
    if (stoi(n) % 3 == 0)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}