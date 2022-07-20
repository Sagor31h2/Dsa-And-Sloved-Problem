#include <bits/stdc++.h>
using namespace std;
void bonAppetit(vector<int> bill, int k, int b)
{
    int sum = 0;

    for (int i = 0; i <= bill.size() - 1; i++)
    {
        sum += bill[i];
    }
    cout << sum << endl;
    int Anna = ((sum - bill[k]) / 2);
    cout << Anna << endl;
    if (Anna == b)
    {
        cout << "Bon Appetit";
    }
    else
    {
        cout << (sum / 2) - Anna;
    }
}

int main()
{
    vector<int> a{3, 10, 2, 9};
    int k = 1;
    int b = 7;
    bonAppetit(a, k, b);
    return 0;
}