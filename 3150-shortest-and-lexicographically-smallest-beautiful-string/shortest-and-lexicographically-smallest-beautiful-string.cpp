class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        int n=s.length();
        int c=0;
        int i=0;
        int j=0;
        string ans="";

        while(j<n)
        {
            if(s[j]=='1') 
                c++;
            while(c>k||s[i]=='0')
            {
             if(s[i]=='1'){c--;}
                i++;
            }
            if(c==k){
               string temp = s.substr(i,j-i+1);
             if(ans.empty() || temp.length() < ans.length() ||
                (temp.length() == ans.length() && temp < ans))

               {
                ans=temp;
               }
            }
            j++;
        }

       return ans;
        
    }
};