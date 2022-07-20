#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s = "abba";
    // getline(cin, name);
    for (int i = 0; i < int(s.length() - 1); i++)
    {
        if (s[i] == s[i + 1])
        {
            s.erase(i, 2);

            i = -1;
        }
    }

    cout << ((s.length() == 0) ? "Empty String" : s);

    return 0;
}