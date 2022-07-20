#include <bits/stdc++.h>
using namespace std;
bool ispal(string &s, int i)
{
    if (i >= s.size() / 2)
    {
        return true;
    }
    if (s[i] != s[s.size() - 1 - i])
    {
        return false;
    }
    return ispal(s, i + 1);
}
int main()
{
    string s;
    cin >> s;

    bool r = ispal(s, 0);
    if (r == true)
    {
        cout << "pal" << endl;
    }
    else
    {
        cout << "not pal" << endl;
    }
}