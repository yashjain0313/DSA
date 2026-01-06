class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        map<int, int> mp;
        for (int num : nums) {
            mp[num]++;
        }
        int idx = 0;
        for (auto it : mp) {
            int value = it.first;
            int freq = it.second;

            if (freq >= 2) {
                nums[idx++] = value;
                nums[idx++] = value;
            } else { // freq == 1
                nums[idx++] = value;
            }
        }
        return idx;
    }
};
