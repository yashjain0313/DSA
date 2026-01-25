class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string p = strs[0];
        for(string s : strs)
        {
            string common = "";
            for(int i = 0 ; i < min (s.size(),p.size());i++)
            {
                if(s[i]==p[i])
                {
                    common.push_back(s[i]);
                }
                else{
                        break;
                }
            }
            p=common;
        }

        return p ;
        
    }
};