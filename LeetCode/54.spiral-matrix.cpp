#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode id=54 lang=cpp
 *
 * [54] Spiral Matrix
 */

// @lc code=start
class Solution
{
public:
    vector<int> spiralOrder(vector<vector<int>> &matrix)
    {
        vector<int> res;
        int left = 0;
        int top = 0;
        int bottom = matrix.size() - 1;
        int right = matrix[0].size() - 1;
        int dir = 1;
        while (top <= bottom && left <= right)
        {
            /* code */
            if (dir == 1)
            {
                for (int i = left; i <= right; i++)
                {
                    res.push_back(matrix[top][i]);
                }
                top += 1;
                dir = 2;
            }
            else if (dir == 2)
            {
                for (int i = top; i <= bottom; i++)
                {
                    res.push_back(matrix[i][right]);
                }
                dir = 3;
                right -= 1;
            }
            else if (dir == 3)
            {
                for (int i = right; i >= left; i--)
                {
                    res.push_back(matrix[bottom][i]);
                }
                dir = 4;
                bottom -= 1;
            }
            else if (dir == 4)
            {
                for (int i = bottom; i >= top; i--)
                {
                    res.push_back(matrix[i][left]);
                }
                dir = 1;
                left += 1;
            }
        }

        return res;
    }
};
// @lc code=end
