class Solution {
public:
    int maxProduct(int n) {
        int mx1=0;
        int mx2=0;
        while(n>0)
        {   
           if(n%10>=mx1)
           {
            mx2=mx1;
            mx1=n%10;
           }else if (n%10>mx2){
            mx2=n%10;
           }
           n/=10;
        }
        return mx1*mx2;
    }
};