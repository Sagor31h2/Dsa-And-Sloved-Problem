#include <bits\stdc++.h>
using namespace std;

int main()
{
    vector<vector<int>> s{
        {5, 3, 4},
        {1, 5, 8},
        {6, 4, 2}};

    set<int> store;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            store.insert(s[i][j]);
        }
    }

    for (auto i : store)
    {
        cout << i << " ";
    }
    return 0;
}