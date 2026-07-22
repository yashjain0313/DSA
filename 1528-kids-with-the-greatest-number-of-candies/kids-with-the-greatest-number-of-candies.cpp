class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& c, int e) {
        int m = 0;
        for(auto i : c){
            m=max(i,m);
        }
        vector<bool>ans(c.size(),false);

         for(int i =0;i<c.size();i++){
            if(c[i]+e>=m)
            {
                ans[i]=true;
            }
         }
        return ans ;
    }
};