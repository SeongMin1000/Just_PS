#include <iostream>
using namespace std;

int arrA[101][101];
int arrB[101][101];
int ans[101][101];

int main(void)
{
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arrA[i][j];
        }
    }

    int k;
    cin >> m >> k;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < k; j++)
        {
            cin >> arrB[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < k; j++)
        {
            for (int u = 0; u < m; u++)
            {
                ans[i][j] += arrA[i][u] * arrB[u][j];
            }
            cout << ans[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}