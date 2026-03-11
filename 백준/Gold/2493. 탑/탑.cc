#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    stack<pair<int, int>> s;
    for (int i = 1; i <= n; i++)
    {
        int h;
        cin >> h;

        while (!s.empty() && s.top().first < h)
            s.pop();

        if (s.empty())
            cout << 0 << " ";
        else
            cout << s.top().second << " ";

        s.push({h, i});
    }

    return 0;
}