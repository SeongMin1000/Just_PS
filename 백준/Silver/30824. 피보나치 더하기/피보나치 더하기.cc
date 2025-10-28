#include <bits/stdc++.h>

using namespace std;

vector<long long> fib;

void cal_fib()
{
    fib.push_back(1);
    fib.push_back(2);

    while (1)
    {
        long long n_fib = fib.back() + fib[fib.size() - 2];
        if (n_fib > 10000000000000000LL)
            break;
        fib.push_back(n_fib);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cal_fib();

    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int k;
        long long x;
        cin >> k >> x;

        bool found = false;
        if (k == 1)
        {
            if (binary_search(fib.begin(), fib.end(), x))
            {
                found = true;
            }
        }
        else if (k == 2)
        {
            for (auto fa : fib)
            {
                if (fa >= x)
                    break;

                long long rem = x - fa;
                if (binary_search(fib.begin(), fib.end(), rem))
                {
                    found = true;
                    break;
                }
            }
        }
        else if (k == 3)
        {
            for (auto fa : fib)
            {
                if (fa >= x)
                    break;

                for (auto fb : fib)
                {
                    if (fa + fb >= x)
                        break;

                    long long rem = x - fa - fb;
                    if (binary_search(fib.begin(), fib.end(), rem))
                    {
                        found = true;
                        break;
                    }
                }
                if (found)
                    break;
            }
        }

        if (found)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}