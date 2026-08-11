class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int sum = nums[0];

        set<int> s(nums.begin(), nums.end());

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] == nums[i - 1] + 1) {
                sum += nums[i];
            } else {
                break;
            }
        }

        int ans = sum;

        while (s.find(ans) != s.end()) {
            ans++;
        }

        return ans;
    }
};