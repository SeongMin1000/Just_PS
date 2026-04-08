#include <bits/stdc++.h>

using namespace std;

int dis[100002];
int cnt[100002];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;

    for (int i = 0; i < 100002; i++)
    {
        dis[i] = -1;
        cnt[i] = 0;
    }

    queue<int> q;
    q.push(n);
    dis[n] = 0;
    cnt[n] = 1;

    while (!q.empty())
    {
        auto cur = q.front();
        q.pop();
        for (auto a : {cur - 1, cur + 1, 2 * cur})
        {
            if (a < 0 || a > 100000)
                continue;
            if (dis[a] == -1)
            {
                dis[a] = dis[cur] + 1;
                cnt[a] = cnt[cur];
                q.push(a);
            }
            else if (dis[a] == dis[cur] + 1)
            {
                cnt[a] += cnt[cur];
            }
        }
    }

    cout << dis[k] << "\n"
         << cnt[k];
    return 0;
}