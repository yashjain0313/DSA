class Solution {
public:
    int maxScore(vector<int>& c, int k) {
        int l=0;
        int n = c.size();
        int ms=0;
        int sum =0;
        for(int i =0 ; i<k;i++)
        {    
sum+=c[i];
        }
        ms = sum;
        int r=n-1;
        for(int i=k-1;i>=0;i--)
        {
            sum-= c[i];
            sum+=c[r];
            r--;
            ms=max(ms,sum);
        }

        return ms;


    }
};