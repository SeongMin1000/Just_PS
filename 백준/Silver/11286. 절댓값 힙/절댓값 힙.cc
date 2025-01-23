#include <bits/stdc++.h>
using namespace std;

class cmp
{
public:
    bool operator()(int a, int b)
    {
        if (abs(a) != abs(b))
            return abs(a) > abs(b);
        return a > b;
    }
};

priority_queue<int, vector<int>, cmp> pq;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        if (x != 0)
            pq.push(x);
        else
        {
            if (pq.empty())
                cout << "0\n";
            else
            {
                cout << pq.top() << "\n";
                pq.pop();
            }
        }
    }
    return 0;
}