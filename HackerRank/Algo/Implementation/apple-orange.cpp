#include <bits/stdc++.h>
using namespace std;

void Points(int a, int b, int s, int t, vector<int> apples, vector<int> oranges)
{
    int ac = 0, oc = 0;

    for (int i = 0; i < apples.size(); i++)
    {
        int x = apples[i] + a;

        if (x >= s && x <= t)
        {
            ac++;
        }
    }
    cout << ac << endl;

    for (int i = 0; i < oranges.size(); i++)
    {
        int x = oranges[i] + b;

        if (x >= s && x <= t)
        {
            oc++;
        }
    }
    cout << oc << endl;
}

int main()
{
    int s, t, a, b;
    s = 7, t = 10, a = 4, b = 12;
    vector<int> apple, orange;
    apple = {2, 3, 4, 7}, orange = {-3, 2, 8};

    Points(a, b, s, t, apple, orange);
    return 0;
}