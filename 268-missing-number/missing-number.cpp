class Solution {
public:
    int missingNumber(vector<int>& nums) {
    int res = nums.size();
    for (int i = 0; i < nums.size(); i++) {
        res ^= i;// first occurence 
        res ^= nums[i];// cancels if exist 
    }
    return res;
}

};