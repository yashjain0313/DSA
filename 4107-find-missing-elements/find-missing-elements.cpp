class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int mx=0;
        int mn = INT_MAX;
        int a=nums.size();
        vector<int>ans;
        unordered_set<int>s;
        for(auto i : nums){
            mx=max(mx,i);
            mn=min(mn,i);
            s.insert(i);
        }

        if(mx-mn+1==nums.size()) return ans;
        else{
            for(int i =mn+1;i<mx;i++)
            {
                if(s.find(i)==s.end())
                {
                    ans.push_back(i);
                }
            }
        }
        return ans ;
        
        
    }
};