#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode id=739 lang=cpp
 *
 * [739] Daily Temperatures
 */

// @lc code=start
class Solution
{
public:
    vector<int> dailyTemperatures(vector<int> &temperatures)
    {
        stack<int> st;
        int size = temperatures.size();
        vector<int> ans(size, 0);

        for (int i = 0; i < size; i++)
        {
            while (st.size() > 0 && temperatures[st.top()] < temperatures[i])
            {
                int top = st.top();
                ans[top] = (i - top);
                st.pop();
            };
            st.push(i);
        }
        return ans;
    }
};
// @lc code=end
