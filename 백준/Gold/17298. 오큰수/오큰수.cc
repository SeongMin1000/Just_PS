#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> arr(n, 0);
    vector<int> a(n, -1);
    stack<int> s;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = n - 1; i >= 0; i--)
    {
        while (!s.empty() && s.top() <= arr[i])
        {
            s.pop();
        }

        if (s.empty())
            a[i] = -1;
        else
            a[i] = s.top();
        s.push(arr[i]);
    }

    for (int i = 0; i < n; i++)
        cout << a[i] << ' ';
    return 0;
}