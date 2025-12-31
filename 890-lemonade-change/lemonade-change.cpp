class Solution {
public:
    bool lemonadeChange(vector<int>& b) {

        int f =0;
        int t=0;
        for(int i =0;i<b.size();i++)
        {
            if(b[i]==5) {
                f++;
                continue;
            }
             if(b[i]==10) {
                t++;
                f--;
            }
            if(b[i]==20)
            {
                if(t>0)
                {t--;
                f--;
                }
                else{
                    f-=3;
                }
            }

            if(f<0 || t<0 ) {return false;}
        }
        return true;
    }
};