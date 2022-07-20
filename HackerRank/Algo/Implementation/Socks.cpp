#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> a{6, 5, 2, 3, 5, 2, 2, 1, 1, 5, 1, 3, 3, 3, 5};

    map<int, int> m;

    for (int i = 0; i < a.size(); i++)
    {
        int key = a[i];
        m[key]++;
    }

    int count = 0;

    for (auto i : m)
    {
        count = count + (i.second / 2);
    }

    cout << count;
}