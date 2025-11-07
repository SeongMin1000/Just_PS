#include <bits/stdc++.h>

using namespace std;

vector<int> fri[2002];
bool visited[2002];
bool found = 0;

void dfs(int start, int depth)
{
    if (depth == 5)
    {
        found = 1;
        return;
    }

    visited[start] = 1;
    for (auto a : fri[start])
    {
        if (!visited[a])
        {
            dfs(a, depth + 1);
        }
    }
    visited[start] = 0;
}

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

        fri[a].push_back(b);
        fri[b].push_back(a);
    }

    for (int i = 0; i < n; i++)
    {
        dfs(i, 1);
        if (found)
        {
            cout << 1;
            return 0;
        }
    }
    cout << 0;
    return 0;
}