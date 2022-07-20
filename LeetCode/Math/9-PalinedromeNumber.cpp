#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isPalindrome(int x)
    {
        if (x < 0)
        {
            return false;
        }
        long num = x;
        long rev = 0;

        while (num > 0)
        {
            long last = num % 10;

            rev = (rev * 10) + last;

            num = num / 10;
        }

        return (x == rev) ? true : false;
    }
};

int main()
{

    Solution s;
    bool con = s.isPalindrome(121);
    if (con == 0)
    {
        cout << "not pal";
    }
    else
    {

        cout << "pal";
    }

    return 0;
}