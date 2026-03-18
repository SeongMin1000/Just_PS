#include <bits/stdc++.h>

using namespace std;

int arr[100002];
int dis[100002];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;
    for (int i = 0; i < 100002; i++)
    {
        dis[i] = -1;
    }
    dis[n] = 0;

    queue<int> q;
    q.push(n);
    while (dis[k] == -1)
    {
        int cur = q.front();
        q.pop();
        for (auto a : {cur - 1, cur + 1, 2 * cur})
        {
            if (a < 0 || a > 100000)
                continue;
            if (dis[a] != -1)
                continue;
            dis[a] = dis[cur] + 1;
            q.push(a);
        }
    }
    cout << dis[k];
    return 0;
}