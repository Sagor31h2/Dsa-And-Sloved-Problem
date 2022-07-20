#include <bits/stdc++.h>
using namespace std;

int Count(vector<int> a, vector<int> b)
{
    int sum = 0;

    for (int i = a.back(); i <= b.front(); i++)
    {
        int z = 0;
        int x = 0;

        for (int j = 0; j < a.size(); j++)
        {

            x += i % a[j];
        }

        for (int j = 0; j < b.size(); j++)
        {
            z += b[j] % i;
        }

        if (z == 0 && x == 0)
        {

            sum++;
        }
    }

    return sum;
}

int main()
{

    vector<int> a{2, 4};
    vector<int> b{16, 32, 96};

    cout << Count(a, b);
    return 0;
}