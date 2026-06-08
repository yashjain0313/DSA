class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int p) {
        vector<int>v;
        vector<int>v1;
        int c =0;

        for(int i=0;i<nums.size();i++)
        {   if(nums[i]<p) v.push_back(nums[i]);
            else if(nums[i]==p){ c++;}
            else v1.push_back(nums[i]);
        }
        for(int i=0;i<c;i++)
        {
            v.push_back(p);
        }
        for(auto i : v1)
        {
            v.push_back(i);
        }
        for(int i =0;i< v.size();i++)
        {
nums[i]=v[i];
        }

        return nums;
    }
};