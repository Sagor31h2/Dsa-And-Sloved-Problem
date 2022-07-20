#include <bits/stdc++.h>
using namespace std;

void count(int n, int p)
{

    int first = p / 2;
    int last = 0;

    if (n % 2 == 0)
    {
        last = (n - p + 1) / 2;
    }
    else
    {
        last = (n - p) / 2;
    }

    if (first < last)
    {
        cout << first;
    }
    else
    {
        cout << last;
    }
}
int main()
{

    count(11, 6);
    return 0;
}