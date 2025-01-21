#include <bits/stdc++.h>
using namespace std;

int arr[100003];

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, s;
    cin >> n >> s;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int mn = (1 << 31) - 1;
    int en = 0;
    int sum = arr[0];
    for (int st = 0; st < n; st++)
    {
        while (en < n && sum < s)
        {
            en++;
            if (en != n)
                sum += arr[en];
        }

        if (en == n)
            break;
        mn = min(mn, en - st + 1);
        sum -= arr[st];
    }
    if (mn == (1 << 31) - 1)
        mn = 0;
    cout << mn;
    return 0;
}