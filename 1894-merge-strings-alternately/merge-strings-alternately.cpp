class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string s1="";
        int l1=word1.length();
        int l2=word2.length();
        int b = 0;
        for(int i =0;i<min(l1,l2);i++)
        {
            s1+=word1[i];
            s1+=word2[i];
            b=i;
        }
        if(l1>l2)
        {  for(int i=b+1;i<l1;i++)
        {
            s1+=word1[i];
        }
        }
        else if(l1<l2)
        {
               for(int i=b+1;i<l2;i++)
        {
            s1+=word2[i];
        }
            
        }

        return s1;


        
    }
};