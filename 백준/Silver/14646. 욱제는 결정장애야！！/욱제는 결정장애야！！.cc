#include <bits/stdc++.h>

using namespace std;

int arr[100002];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int ans = 0;
    int tmp = 0;
    for (int i = 0; i < 2 * n; i++)
    {
        int a;
        cin >> a;
        arr[a]++;
        if (arr[a] == 1)
        {
            tmp++;
        }
        else
        {
            tmp--;
        }
        ans = max(ans, tmp);
    }
    cout << ans;
    return 0;
}