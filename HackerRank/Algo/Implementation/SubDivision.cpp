#include <bits/stdc++.h>

using namespace std;

int birthday(vector<int> s, int d, int m)
{

    int count = 0;

    for (int i = 0; i <= s.size() - 1; i++)
    {

        int sum = 0;
        for (int j = i; j < m + i; j++)
        {
            sum += s[j];
        }
        if (sum == d)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    vector<int> s{1, 1, 1, 1, 1};
    int d = 3;
    int m = 2;
    int k = birthday(s, d, m);

    cout << "k=" << k;
}