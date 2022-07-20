#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string s;
    cin >> n >> s;

    int count = 0;
    int h = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'U')
        {
            h++;
            if (h == 0)
            {
                count++;
            }
        }
        else
        {
            h--;
        }
    }
    cout << count;

    return 0;
}