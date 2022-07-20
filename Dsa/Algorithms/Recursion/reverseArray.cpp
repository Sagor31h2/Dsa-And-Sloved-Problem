#include <bits/stdc++.h>
using namespace std;

void swaparr(int i, int arr[], int n)
{
    if (i >= n / 2)
    {
        return;
    }
    else
    {
        swap(arr[i], arr[n - 1 - i]);
        swaparr(i + 1, arr, n);
    }
}

int main()
{
    cout << "enter the number of n" << endl;

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    swaparr(0, arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}