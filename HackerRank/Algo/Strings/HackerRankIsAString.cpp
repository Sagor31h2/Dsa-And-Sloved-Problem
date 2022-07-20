#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n = 0;
    cin >> n;

    string hack = "hackerrank";

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        int j = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == hack[j])
            {
                j++;
            }
        }

        cout << ((j == hack.size()) ? "Yes" : "No") << endl;
    }

    return 0;
}