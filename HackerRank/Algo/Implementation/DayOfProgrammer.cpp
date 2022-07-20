#include <bits/stdc++.h>
using namespace std;

string dayOfProgrammer(int year)
{
    string s;

    if (year == 1918)
    {
        s = "26.09." + to_string(year);
    }

    else if (year <= 1917 && year % 4 == 0)
    {
        s = "12.09." + to_string(year);
    }
    else if (year >= 1919 && year % 400 == 0 || year % 4 == 0 && year % 100 != 0)
    {
        s = "12.09." + to_string(year);
    }
    else
    {
        s = "13.09." + to_string(year);
    }
    return s;
}
int main()
{
    int year;
    cin >> year;
    cout << dayOfProgrammer(year);

    return 0;
}