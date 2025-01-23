#include <bits/stdc++.h>

using namespace std;

priority_queue<int, vector<int>, greater<int>> pq;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        pq.push(x);
    }

    int ans = 0;
    while (pq.size() > 1)
    {
        int a = pq.top();
        pq.pop();
        int b = pq.top();
        pq.pop();
        ans += a + b;
        pq.push(a + b);
    }
    cout << ans;

    return 0;
}