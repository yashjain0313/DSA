class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int>mp;
        for(auto i : nums)
        {
            mp[i]++;
        }
        vector<int>ans(2,0);

        for(int i = 0; i < nums.size(); i++)
        {

            int f = target - nums[i];

            if (mp.find(f) != mp.end())
            {
                bool found = false;  

                for(int j = i + 1; j < nums.size(); j++)
                {
                    if(nums[j] == f)
                    {
                        ans[0] = i;
                        ans[1] = j;
                        found = true;   
                        break;         
                    }
                }

                if(found) break;  
            }
        }

        return ans;
    }
};
