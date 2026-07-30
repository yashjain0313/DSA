class Solution {
public:
    int minimumPushes(string w) {
        int l = w.length();
        if(l<=8) return l;
        int a = l/8;
        int b = l%8;
        int ans =0;
        int m=a;
         int d=1;
        if(a>=1)
        {
            while(a--)
            {
                ans+=8*d;
                d++;
            }
        }
       return ans+b*d; 
    }
};