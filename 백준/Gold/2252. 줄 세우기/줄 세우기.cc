#include <bits/stdc++.h>

using namespace std;

int deg[32002];
vector<int> adj[32002];

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, m;
    cin >> n >> m;

    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;

        adj[a].push_back(b);
        deg[b]++;
    }

    queue<int> q;
    for (int i = 1; i <= n; i++)
    {
        if (deg[i] == 0)
            q.push(i);
    }
    
    while (!q.empty())
    {
        int cur = q.front();
        q.pop();
        cout << cur << " ";
        for (int nxt : adj[cur])
        {
            deg[nxt]--;
            if (deg[nxt] == 0)
                q.push(nxt);
        }
    }
    return 0;
}