#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    set<int> store;

    int sum = 0;
    int last = 0;

    int t, u, v;

    for (auto c : s)
    {
        int x = c - 'a' + 1;
        t = x == last ? sum + x : x;
        store.insert(t);
        sum = t;
        last = x;
    }

    cin >> u;
    while (u--)
    {
        cin >> v;
        cout << (store.count(v) ? "Yes" : "No") << endl;
    }

    return 0;
}