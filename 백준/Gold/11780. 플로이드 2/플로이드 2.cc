#include <bits/stdc++.h>

using namespace std;

int arr[103][103];
int nxt[103][103];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, m;
    cin >> n >> m;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            arr[i][j] = 0x3f3f3f3f;
        }
    }

    for (int i = 0; i < m; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        arr[a][b] = min(arr[a][b], c);
        nxt[a][b] = b;
    }

    for (int i = 1; i <= n; i++)
    {
        arr[i][i] = 0;
    }

    for (int k = 1; k <= n; k++)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (arr[i][j] > arr[i][k] + arr[k][j])
                {
                    arr[i][j] = arr[i][k] + arr[k][j];
                    nxt[i][j] = nxt[i][k];
                }
            }
        }
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (arr[i][j] == 0x3f3f3f3f)
                cout << "0 ";
            else
                cout << arr[i][j] << " ";
        }
        cout << "\n";
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (arr[i][j] == 0x3f3f3f3f || arr[i][j] == 0)
            {
                cout << "0\n";
                continue;
            }

            vector<int> path;
            int st = i;
            while (st != j)
            {
                path.push_back(st);
                st = nxt[st][j];
            }
            path.push_back(j);

            cout << path.size() << " ";
            for (auto x : path)
                cout << x << " ";
            cout << "\n";
        }
    }

    return 0;
}