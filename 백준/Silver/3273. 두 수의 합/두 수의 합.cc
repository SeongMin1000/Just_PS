#include <bits/stdc++.h>

using namespace std;

int arr[200002];
int pos[2000002];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        pos[a]++;
        arr[i] = a;
    }
    int x;
    cin >> x;

    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (x - arr[i] > 0 && pos[x - arr[i]])
            ans++;
    }
    cout << ans / 2;

    return 0;
}