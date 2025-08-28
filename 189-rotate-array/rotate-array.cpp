class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int s = nums.size();
        k = k % s;
        vector<int> n(s);
        int c = 0;

        for(int i = s - k; i < s; i++) {
            n[c] = nums[i];
            c++;
        }

        for(int i = 0; i < s - k; i++) {
            n[c] = nums[i];
            c++;
        }

        for(int i = 0; i < s; i++) {
            nums[i] = n[i];
        }
    }
};
