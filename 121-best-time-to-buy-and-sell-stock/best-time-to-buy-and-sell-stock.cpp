class Solution {
public:
    int maxProfit(vector<int>& p) {
       int l = 0;
       int r = 1;
       int n = p.size();
       int maxp = 0;
       while(r<n){
        if(p[l]<p[r]){
            maxp=max(maxp,p[r]-p[l]);
        }else{
            l=r;
        }
        r++;
       }
    return maxp;
    }
};