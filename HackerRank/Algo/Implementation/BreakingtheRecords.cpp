#include <bits/stdc++.h>
using namespace std;

vector<int> Calculate(vector<int> scores)
{
    // counting
    int lc = 0;
    int wc = 0;

    int low = scores[0];
    int high = scores[0];
    for (int i = 1; i < scores.size(); i++)
    {
        if (low > scores[i])
        {
            low = scores[i];
            lc++;
        }

        if (high < scores[i])
        {
            high = scores[i];
            wc++;
        }
    }

    vector<int> b;
    b.push_back(wc);
    b.push_back(lc);
    return b;
}

int main()
{
    vector<int> a{3, 4, 21, 36, 10, 28, 35, 5, 24, 42};
    vector<int> z = Calculate(a);
    for (int i = 0; i < z.size(); i++)
    {
        cout << z[i] << " ";
    }

    return 0;
}