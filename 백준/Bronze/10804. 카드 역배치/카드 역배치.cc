#include <bits/stdc++.h>

using namespace std;

int arr[21];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    for (int i = 1; i <= 20; i++)
    {
        arr[i] = i;
    }

    for (int i = 0; i < 10; i++)
    {
        int st, en;
        cin >> st >> en;

        reverse(arr + st, arr + en + 1);
    }

    for (int i = 1; i <= 20; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}