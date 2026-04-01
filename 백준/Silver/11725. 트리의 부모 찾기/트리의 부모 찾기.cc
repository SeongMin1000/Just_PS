#include <bits/stdc++.h>
using namespace std;

vector<int> adj[100002];
bool vis[100002];
int arr[100002];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    for (int i = 0; i < n - 1; i++)
    {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    queue<int> q;
    q.push(1);
    vis[1] = 1;
    while (!q.empty())
    {
        auto cur = q.front();
        q.pop();

        for (auto a : adj[cur])
        {
            if (!vis[a])
            {
                vis[a] = 1;
                q.push(a);
                arr[a] = cur;
            }
        }
    }
    for (int i = 2; i <= n; i++)
    {
        cout << arr[i] << "\n";
    }
    return 0;
}