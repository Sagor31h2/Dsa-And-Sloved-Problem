#include <bits/stdc++.h>

using namespace std;

int mars(string s)
{

    int count = 0;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != 'S')
            count++;

        if (s[i + 1] != 'O')

            count++;

        if (s[i + 2] != 'S')

            count++;

        i += 2;
    }

    return count;
}

int main()
{
    string s;
    cin >> s;

    cout << mars(s);

    return 0;
}