#include <bits/stdc++.h>
using namespace std;

string YesNo(int x1, int v1, int x2, int v2)
{

    // for (int i = 1; i < 1000; i++)
    // {
    //     int x = (v1 * i) + x1;
    //     int y = (v2 * i) + x2;
    //     cout << x << " " << y << " " << i << endl;
    //     if (x == y)
    //     {
    //         cout << x << " " << y << " " << i << endl;
    //         exit(1);
    //     }
    // }

    int i = 1;
    int x = (v1 * i) + x1;
    int y = (v2 * i) + x2;
    while (x <= y)
    {
        x = (v1 * i) + x1;
        y = (v2 * i) + x2;
        if (x == y)
        {
            return "YES";
            exit(1);
        }

        i++;
    }
    return "NO";
}

int main()
{

    int x1 = 2564, v1 = 5393, x2 = 5121, v2 = 2836;

    cout << YesNo(x1, v1, x2, v2);

    int i = 1;
    int p = 3;
    int q = 2;

    int r = p * i;
    int s = q * i + 4;

    // while loop from 1 to 5
    while (r < s)
    {
        r = p * i;
        s = q * i + 4;
        // cout << r << " " << s << endl;
        ++i;
    }

    return 0;
}