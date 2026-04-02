#include <bits/stdc++.h>

using namespace std;

vector<int> adj[20002];
int vis[20002];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int k;
    cin >> k;
    for (int i = 0; i < k; i++)
    {
        int V, e;
        cin >> V >> e;
        for (int j = 0; j < e; j++)
        {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        bool ans = true;
        for (int j = 1; j <= V; j++)
        {
            if (!vis[j])
            {
                vis[j] = 1;
                queue<int> q;
                q.push(j);

                while (!q.empty())
                {
                    auto cur = q.front();
                    q.pop();
                    for (auto a : adj[cur])
                    {
                        if (!vis[a])
                        {
                            q.push(a);
                            if (vis[cur] == 1)
                                vis[a] = 2;
                            else if (vis[cur] == 2)
                                vis[a] = 1;
                        }
                        else if (vis[a] == vis[cur])
                        {
                            ans = false;
                            break;
                        }
                    }
                }
            }
        }

        if (ans)
            cout << "YES\n";
        else
            cout << "NO\n";

        for (int j = 1; j <= V; j++)
        {
            adj[j].clear();
            vis[j] = 0;
        }
    }

    return 0;
}