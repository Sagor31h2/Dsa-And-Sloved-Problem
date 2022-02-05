#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        vector<int> s;
        unordered_map<int, int> map;
        for (int i = 0; i < nums.size(); i++)
        {
            if (map.find(target - nums[i]) != map.end())
            {
                s.push_back(map[target - nums[i]]);
                s.push_back(i);
            }
            map[nums[i]] = i;
        }

        return s;
    }
};

int main()
{
    vector<int> a{2, 7, 11, 15};
    int target = 9;

    Solution s;
    auto re = s.twoSum(a, target);

    for (auto i : re)
    {
        cout << i << " ";
    }

    return 0;
}