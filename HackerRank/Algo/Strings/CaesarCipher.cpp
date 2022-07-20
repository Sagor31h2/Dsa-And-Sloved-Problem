#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    string s;
    int f;
    cin >> n;
    cin >> s;
    cin >> f;

    string t;

    for (int i = 0; i < n; i++)
    {
        char a = s[i];

        if (isupper(a))
        {
            int l = (int(a) + f);

            while (l > 90)
            {
                l -= 26;
            }
            a = char(l);
        }
        else if (islower(a))
        {
            int l = (int(a) + f);

            while (l > 122)
            {
                l -= 26;
            }
            a = char(l);
        }
        t.push_back(a);
    }

    cout << t;

    return 0;
}