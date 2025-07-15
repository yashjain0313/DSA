class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
    int n =nums.size();
    sort(nums.begin(),nums.end());
    vector<vector<int>>ans;
    for(int i=0;i<n;i++)
    {
        if(i>0 && nums[i]==nums[i-1]) continue;

        int j=i+1;
        int k= n-1;

        while(j<k)
        {
           int s= nums[i]+nums[j]+nums[k];
           if(s<0)
           {
            j++;
           }
           else if (s>0)
           {
           k--;
           }
           else{
            vector<int>v={nums[i],nums[j],nums[k]};
            ans.push_back(v);
            k--;
            j++;

            while(j<k &&nums[j]==nums[j-1]) j++;
            while(j<k && nums[k]==nums[k+1]) k--;

           }
        }
    }
    return ans;

    }
};