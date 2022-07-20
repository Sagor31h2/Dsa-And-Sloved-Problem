#include <bits/stdc++.h>
using namespace std;
int divisibleSumPairs(int n, int k, vector<int> ar)
{
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if ((ar[i] + ar[j]) % k == 0)
            {
                count++;
            }
        }
    }
    return count;
}

int main()
{
    int n, k, j;
    vector<int> ar;
    cout << "how many numbers you want to input" << endl;
    cin >> n;

    cout << "Input numbers of array" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "i- " << i << endl;
        cin >> j;
        ar.push_back(j);
    }

    cout << "Input k" << endl;
    cin >> k;

    int x = divisibleSumPairs(n, k, ar);
    cout << "Numbers are--" << x << endl;
}