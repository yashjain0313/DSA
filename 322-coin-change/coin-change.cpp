class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
    vector<int> dp(amount + 1, amount + 1); // Initialize with a large number
    dp[0] = 0;  // Base case
    
    for(int i = 1; i <= amount; i++) {
        // each amount 
        for(int coin : coins) {
            //here checking if it is lower 
            //cuz if higher we won't take that coin 
            if(coin <= i) {

                dp[i] = min(dp[i], dp[i - coin] + 1);
                // for 11
                // if i =10
                // so min(dp[i] which is 12 , dp[i-coin]which is 10-5 =5)
                /// 5 already have value 1 cuz 5 is in denomination 
                // then 
                //i=11
                //dp[10]+1 which is 3
               // so yes 
            }
        }
    }
    
    /// if lower than only we'll print else -1
    // 
    return dp[amount] > amount ? -1 : dp[amount];
}
};