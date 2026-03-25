#include <bits/stdc++.h>

using namespace std;

char arr[3072][6144];

void func(int y, int x, int n)
{
    if (n == 3)
    {
        arr[y][x] = '*';
        arr[y + 1][x - 1] = '*';
        arr[y + 1][x + 1] = '*';
        for (int i = -2; i <= 2; i++)
        {
            arr[y + 2][x + i] = '*';
        }
        return;
    }

    int half = n / 2;
    func(y, x, half);
    func(y + half, x - half, half);
    func(y + half, x + half, half);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2 * n; j++)
        {
            arr[i][j] = ' ';
        }
    }

    func(0, n - 1, n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2 * n - 1; j++)
            cout << arr[i][j];
        cout << '\n';
    }
    return 0;
}