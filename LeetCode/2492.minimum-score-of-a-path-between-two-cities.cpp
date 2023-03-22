/*
 * @lc app=leetcode id=2492 lang=cpp
 *
 * [2492] Minimum Score of a Path Between Two Cities
 */

// @lc code=start
class Solution
{
public:
    int minScore(int n, vector<vector<int>> &roads)
    {
        vector<vector<pair<int, int>>> adj(n + 1);
        for (auto r : roads)
        {
            adj[r[0]].push_back({r[1], r[2]});
            adj[r[1]].push_back({r[0], r[2]});
        }
        return bfs(adj, n);
    }

private:
    int bfs(vector<vector<pair<int, int>>> &adj, int n)
    {
        vector<bool> vis(n + 1);

        int ans = numeric_limits<int>::max();

        queue<int> q;
        q.push(1);
        vis[1] = true;

        while (!q.empty())
        {
            auto cur = q.front();
            q.pop();
            for (auto i : adj[cur])
            {
                ans = min(i.second, ans);
                if (!vis[i.first])
                {
                    vis[i.first] = true;
                    q.push(i.first);
                }
            }
        }
        return ans;
    }
};
// @lc code=end
