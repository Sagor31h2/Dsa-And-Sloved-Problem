#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode id=973 lang=cpp
 *
 * [973] K Closest Points to Origin
 */

// @lc code=start
class Solution
{
public:
    vector<vector<int>> kClosest(vector<vector<int>> &points, int k)
    {
        vector<vector<int>> res;
        priority_queue<pair<int, int>> heap;

        for (int i = 0; i < points.size(); i++)
        {
            heap.emplace(-(points[i][0] * points[i][0] + points[i][1] * points[i][1]), i);
        }
        for (int i = 0; i < k; i++)
        {
            res.push_back(points[heap.top().second]);
            heap.pop();
        }
        return res;
    }
};
// @lc code=end
