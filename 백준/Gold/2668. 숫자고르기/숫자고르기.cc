#include <bits/stdc++.h>

using namespace std;

int v[101];
bool visited[101];
vector<int> ans;

void dfs(int cur, int start)
{
    if (visited[cur])
    {
        if (start == cur)
            ans.push_back(cur);
        return;
    }

    visited[cur] = true;
    dfs(v[cur], start);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            visited[j] = false;
        }

        dfs(i, i);
    }

    cout << ans.size() << "\n";
    for (auto x : ans)
        cout << x << "\n";

    return 0;
}