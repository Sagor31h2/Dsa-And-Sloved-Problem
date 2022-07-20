#include <bits/stdc++.h>
using namespace std;

int getMoneySpent(vector<int> keyboards, vector<int> drives, int b)
{
    sort(keyboards.begin(), keyboards.end());
    sort(drives.begin(), drives.end());

    vector<int> total;

    for (int i = 0; i < keyboards.size(); i++)
    {
        for (int j = 0; j < drives.size(); j++)
        {
            int sum = keyboards[i] + drives[j];

            if (sum > b)
            {
                break;
            }
            else
            {
                total.push_back(sum);
            }
        }
    }
    sort(total.begin(), total.end());
    int last = total.size();
    if (last > 0)
    {
        return total[last - 1];
    }

    return -1;
}

int main()
{
    vector<int> k{5, 1, 1};
    vector<int> d{4};
    int b = 5;

    cout << getMoneySpent(k, d, b);

    return 0;
}
