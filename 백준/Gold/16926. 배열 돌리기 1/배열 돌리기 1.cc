#include <bits/stdc++.h>

using namespace std;

int arr[303][303];
int temp[303][303];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    int r;
    cin >> r;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    while (r--)
    {
        int top = 0, left = 0;
        int bottom = n - 1, right = m - 1;

        while (top < bottom && left < right)
        {
            for (int i = left; i < right; i++)
                temp[top][i] = arr[top][i + 1];
            for (int i = top; i < bottom; i++)
                temp[i][right] = arr[i + 1][right];
            for (int i = right; i > left; i--)
                temp[bottom][i] = arr[bottom][i - 1];
            for (int i = bottom; i > top; i--)
                temp[i][left] = arr[i - 1][left];

            top++;
            bottom--;
            left++;
            right--;
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                arr[i][j] = temp[i][j];
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << ' ';
        }
        cout << '\n';
    }

    return 0;
}