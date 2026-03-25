#include <bits/stdc++.h>

using namespace std;

void func(int n, int start, int mid, int end)
{
    if (n == 1)
    {
        cout << start << " " << end << "\n";
        return;
    }

    func(n - 1, start, end, mid);
    cout << start << " " << end << "\n";
    func(n - 1, mid, start, end);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int k;
    cin >> k;
    cout << (1 << k) - 1 << "\n";
    func(k, 1, 2, 3);
    return 0;
}