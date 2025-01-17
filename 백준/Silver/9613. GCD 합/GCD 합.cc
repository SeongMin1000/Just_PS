#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        vector<int> temp(n);
        long long sum = 0;
        for (int j = 0; j < n; j++)
        {
            cin >> temp[j];
        }
        for (int j = 0; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                sum += gcd(temp[j], temp[k]);
            }
        }

        cout << sum << "\n";
    }
    return 0;
}