#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    vector<string> parts;
    string cur = "";

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == ':')
        {
            parts.push_back(cur);
            cur = "";

            if (i + 1 < s.size() && s[i + 1] == ':')
            {
                parts.push_back("");
                i++;
            }
        }
        else
        {
            cur += s[i];
        }
    }
    parts.push_back(cur);

    int idx = -1;
    for (int i = 0; i < parts.size(); i++)
    {
        if (parts[i] == "")
        {
            idx = i;
            break;
        }
    }

    if (idx != -1)
    {
        int to_add = 8 - parts.size() + 1;
        parts.erase(parts.begin() + idx);
        parts.insert(parts.begin() + idx, to_add, "0");
    }

    for (string &p : parts)
    {
        while (p.size() < 4)
            p = "0" + p;
    }

    for (int i = 0; i < 8; i++)
    {
        cout << parts[i];
        if (i != 7)
            cout << ":";
    }
}
