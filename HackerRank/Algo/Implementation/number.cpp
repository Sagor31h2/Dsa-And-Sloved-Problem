#include <bits/stdc++.h>
using namespace std;

vector<int> round(vector<int> grades)
{
    for (size_t i = 0; i < grades.size(); i++)
    {
        if (grades[i] % 5 >= 3 && grades[i] > 38)
        {
            grades[i] = (grades[i] + (5 - (grades[i] % 5)));
        }
    }

    return grades;
}

int main()
{
    vector<int> a{33, 39, 41, 49};
    vector<int> z = round(a);
    for (int i = 0; i < z.size(); i++)
    {
        cout << z[i] << endl;
    }

    return 0;
}