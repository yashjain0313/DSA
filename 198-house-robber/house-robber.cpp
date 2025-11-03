class Solution {

private:
int sol(vector<int>& n,vector<int>& dp,int i)
{
    if(i==0) return n[i];
    if(i<0) return 0;
    if(dp[i]!=-1) return dp[i];
    return dp[i]=max(n[i]+sol(n,dp,i-2),sol(n,dp,i-1));
}
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int>dp(n+1,-1);
        return sol(nums,dp,n-1);





        
    }
};