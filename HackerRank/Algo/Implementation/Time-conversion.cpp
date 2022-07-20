#include <bits/stdc++.h>
using namespace std;

string sConvert(string s)
{
    int n = s.length();
    string t;

    if (s[n - 2] == 'P')
    {

        int num = std::stoi(s);
        if (num == 12)
        {
            t.append(s, 0, n - 2);
        }
        else
        {
            int convert = num + 12;
            string s = std::to_string(convert);

            t.append(s);
            t.append(s, 2, 6);
        }
    }

    if (s[n - 2] == 'A')
    {
        int num = std::stoi(s);
        if (num == 12)
        {

            string reset = "00";
            t.append(reset);
            t.append(s, 2, 6);
        }
        else
        {
            t.append(s, 0, n - 2);
        }
    }
    return t;
}

int main()
{

    string c = "12:01:00PM";

    string d = "12:01:00PM";

    string z = sConvert(c);
    cout << z;

    return 0;
}