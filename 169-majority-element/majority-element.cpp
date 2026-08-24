class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int>mp;
        int n = nums.size()/2;
        int a = 0 ;
        for(auto i : nums)
        {
            mp[i]++;
            if(mp[i]>n){
                a=i;
                break;
            }
        }
return a;
    }
};