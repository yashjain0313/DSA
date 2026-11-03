class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
 sort(nums.begin(), nums.end());
        int n = nums.size();
        if(n==0) return 0;
        int st = nums[0];
        int c =1;
        int m =1;
        for (int i = 1; i < n; i++) {
            if (nums[i] == nums[i - 1]) {
                continue;
            }
            else if (nums[i] == nums[i - 1] + 1) {
                c++;
            }
            else {
                m = max(m, c);
                c = 1;
            }
        }
           return max(m, c);
    }
};