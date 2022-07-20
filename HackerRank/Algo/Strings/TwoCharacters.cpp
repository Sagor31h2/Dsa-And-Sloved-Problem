#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "beabeefeaba";
    // getline(cin, s);
    char f;

    string t;
    for (int i = 0; i < s.length() - 1; i++)
    {
        if (s[i] == s[i + 1])
        {
            f = s[i];
        }
    }
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != f)
        {

            t.push_back(s[i]);
        }
    }

    cout << t;

    return 0;
}