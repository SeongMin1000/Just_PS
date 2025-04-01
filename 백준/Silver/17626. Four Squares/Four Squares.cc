#include <bits/stdc++.h>

using namespace std;

int arr[50003];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    for (int i = 1; i * i <= n; i++)
    {
        arr[i * i] = 1;
    }

    for (int i = 1; i <= n; i++)
    {
        if (arr[i] != 1)
        {
            arr[i] = arr[i - 1] + 1;

            for (int j = 1; j * j <= i; j++)
            {
                arr[i] = min(arr[i], arr[j * j] + arr[i - j * j]);
            }
        }
    }

    cout << arr[n];
    return 0;
}