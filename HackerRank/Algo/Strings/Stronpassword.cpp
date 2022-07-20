#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'minimumNumber' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER n
 *  2. STRING password
 */

int minimumNumber(int n, string p)
{
    // Return the minimum number of characters to make the password strong
    string s = "!@#$%^&*()-+";
    int up = 1, lo = 1, di = 1, sp = 1;

    for (int i = 0; i < n; i++)
    {
        if (isupper(p[i]))
        {
            up = 0;
        }
        else if (islower(p[i]))
        {
            lo = 0;
        }
        else if (isdigit(p[i]))
        {
            di = 0;
        }
        else if (s.find(p[i]) != string::npos)
        {
            sp = 0;
        }
    }

    int total = up + lo + sp + di;

    return max(6 - n, total);
}

int main()
{
    int n;
    cin >> n;
    string pass;
    cin >> pass;
    cout << minimumNumber(n, pass);

    return 0;
}
