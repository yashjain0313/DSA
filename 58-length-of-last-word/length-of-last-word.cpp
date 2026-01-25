class Solution {
public:
    int lengthOfLastWord(string s) {

        int l = s.length();
        bool a = 1;
        int n =0;
        int b =0;

        for(int i = l-1;i>=0;i--)
        {
            if(s[i]!=' ' && a==1)
            {
                a=0;
                n=i+1;
            }
             if(s[i]==' '&& a==0)
            {
               b=i+1;
               break;
            }
        }

        return n-b > 0 ? n-b:1  ;
        
    }
};