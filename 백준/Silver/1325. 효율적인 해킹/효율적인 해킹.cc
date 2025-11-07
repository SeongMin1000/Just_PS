#include <bits/stdc++.h>

using namespace std;

vector<int> v[10003];
bool visited[10003];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;

        v[b].push_back(a);
    }

    int maxcnt = 0;
    vector<pair<int, int>> maxIndex;
    for (int i = 1; i <= n; i++)
    {
        for (int i = 1; i <= n; i++)
        {
            visited[i] = 0;
        }
        queue<int> q;
        q.push(i);
        visited[i] = 1;
        int cnt = 0;

        while (!q.empty())
        {
            int cur = q.front();
            for (auto a : v[cur])
            {
                if (!visited[a])
                {
                    q.push(a);
                    visited[a] = 1;
                    cnt++;
                }
            }
            q.pop();
        }
        if (maxcnt <= cnt)
        {
            maxcnt = cnt;
            maxIndex.push_back({i, maxcnt});
        }
    }

    vector<int> ans;
    for (auto [a, b] : maxIndex)
    {
        if (b == maxcnt)
            ans.push_back(a);
    }

    sort(ans.begin(), ans.end());
    for (auto a : ans)
        cout << a << " ";
    return 0;
}