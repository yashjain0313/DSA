
class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int s = nums.size();
        int n = s;
        int mx = INT_MIN;
        int mn = INT_MAX;
        int t1 = 0;
        int t2 = 0;

        for(int i = 0; i < s; i++) {
            if(nums[i] > mx) {
                mx = nums[i];
                t1 = i;
            }
            if(nums[i] < mn) {
                mn = nums[i];
                t2 = i;
            }
        }

        if(t1 > t2) swap(t1, t2);

        int a = t2 + 1;
        int b = n - t1;
        int c = t1 + 1 + n - t2;

        return min({a, b, c});
    }
};

