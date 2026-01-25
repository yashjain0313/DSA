class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int>mp;
        for( int i : nums)
        {
            mp[i]++;
        }
        int f =0 ;
        int ans = 0;
        for( auto i : mp )
        {
                if( i .second > f)
                {
                    f=i.second;
                    ans=i.first;
                }
        }

        return ans ;
    }
};