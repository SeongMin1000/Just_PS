#include <bits/stdc++.h>

using namespace std;

vector<int> p(10005, -1); // 자기 자신을 루트로 모두 초기화

// 루트 노드 찾기
int find(int x)
{
    if (p[x] < 0)
        return x;
    return p[x] = find(p[x]);
}

// 두 정점이 같은 그룹인 지 확인인
bool uni(int u, int v) // 1 2
{
    u = find(u); // 1
    v = find(v); // 2
    if (u == v)
        return false;
    if (p[u] == p[v]) //-1==-1
        p[u]--;
    if (p[u]<p[v]) p[v]=u;
    else p[u] = v;
    return true;
}

tuple<int, int, int> edge[100005];

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int v, e;
    cin >> v >> e;

    for (int i = 0; i < e; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        edge[i] = {c, a, b};
    }
    sort(edge, edge + e);

    int cnt = 0;
    int ans = 0;
    for (int i = 0; i < e; i++)
    {
        int a, b, c;
        tie(c, a, b) = edge[i];
        if (!uni(a, b))
            continue;
        ans += c;
        cnt++;
        if (cnt == v - 1)
            break;
    }
    cout<<ans;
    return 0;
}