#include <bits/stdc++.h>
using namespace std;

int arr[1003];

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr+n);

    vector<int> two;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            two.push_back(arr[i] + arr[j]);
        }
    }
    sort(two.begin(), two.end());

    for (int i = n - 1; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if (binary_search(two.begin(), two.end(), arr[i] - arr[j]))
            {
                cout << arr[i];
                return 0;
            }
        }
    }
    return 0;
}