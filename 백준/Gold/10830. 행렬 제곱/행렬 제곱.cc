#include <iostream>
using namespace std;

long long arr[5][5];
long long ans[5][5];
long long temp[5][5];
long long n;
long long b;

void multi(long long m1[5][5], long long m2[5][5])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            temp[i][j] = 0;
            for (int k = 0; k < n; k++)
            {
                temp[i][j] += (m1[i][k] * m2[k][j]);
            }
            temp[i][j] %= 1000;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            m1[i][j] = temp[i][j];
        }
    }
}

int main(void)
{
    cin >> n >> b;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
        ans[i][i] = 1;
    }

    while (b > 0)
    {
        if (b % 2 == 1)
        {
            multi(ans, arr);
        }
        multi(arr, arr);
        b /= 2;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}