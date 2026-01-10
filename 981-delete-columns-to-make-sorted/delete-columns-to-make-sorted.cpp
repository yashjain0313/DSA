class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int a = 0;

        int s = strs[0].size();
        for(int i =0;i<s;i++)
        {
            char n = strs[0][i];
            for(int j =1;j<strs.size();j++)
            {
                if(n > strs[j][i]){
                 a++;
                 break;
                    }
                    else{
                        n=strs[j][i];
                    }
            }
        }
        return a;
    }
};