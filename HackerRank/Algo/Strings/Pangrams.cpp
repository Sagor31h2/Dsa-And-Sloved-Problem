#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);

    int arr[26] = {0};

    for (int i = 0; i <= s.length(); i++)
    {
        if (s[i] != ' ')
        {
            char ltr = tolower(s[i]);

            arr[ltr - 'a']++;
        }
    }

    bool flag = true;
    for (int i = 0; i < 26; i++)
    {
        if (arr[i] == 0)
        {
            flag = false;
        }
    }

    if (flag == true)
    {

        cout << "pangram";
    }
    else
    {
        cout << "not pangram";
    }

    return 0;
}