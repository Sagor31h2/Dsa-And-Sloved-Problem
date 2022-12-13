#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode id=67 lang=cpp
 *
 * [67] Add Binary
 */

// @lc code=start
class Solution
{
public:
    string addBinary(string a, string b)
    {
        string ans = "";
        int l1 = a.length() - 1;
        int l2 = b.length() - 1;
        int carry = 0;

        while (l1 >= 0 || l2 >= 0 || carry == 1)
        {
            int sum = 0;
            if (l1 >= 0)
            {
                sum += a[l1] - '0';
                l1--;
            }
            if (l2 >= 0)
            {
                sum += b[l2] - '0';
                l2--;
            }
            ans += ((sum + carry) % 2) + '0';
            carry = (sum + carry) / 2;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
// @lc code=end
