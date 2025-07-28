class Solution {
public:
    int f(int index, int k, vector<int> &stones, map<int,int> &mp, vector<vector<int>> &dp) {
        if (index == stones.size() - 1) return 1;
        if (dp[index][k] != -1) return dp[index][k];

        for (int j = k - 1; j <= k + 1; j++) {
            if (j > 0) {
                int nextStone = stones[index] + j;
                if (mp.find(nextStone) != mp.end()) {
                    if (f(mp[nextStone], j, stones, mp, dp))
                        return dp[index][k] = 1;
                }
            }
        }
        return dp[index][k] = 0;
    }

    bool canCross(vector<int>& stones) {
        int n = stones.size();
        if (stones[1] != 1) return false;

        map<int, int> mp;
        for (int i = 0; i < n; i++)
            mp[stones[i]] = i;

        vector<vector<int>> dp(n, vector<int>(n + 1, -1));
        return f(1, 1, stones, mp, dp);
    }
};

