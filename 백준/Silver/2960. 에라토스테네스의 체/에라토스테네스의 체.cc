#include <bits/stdc++.h>
using namespace std;

bool arr[1002];
int isK = 0;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, k;
    cin >> n >> k;

    for (int i = 2; i <= n; i++)
    {
        arr[i] = 1;
    }

    for (int i = 2; i <= n; i++)
    {
        for (int j = i; j <= n; j += i)
        {
            if (arr[j] == true)
            {
                arr[j] = false;
                isK++;
            }
            if (isK == k)
            {
                cout << j;
                return 0;
            }
        }
    }
    return 0;
}