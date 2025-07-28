class Solution {
public:
    vector<int> productExceptSelf(vector<int>& n) {
        int ans=1;

int ctr=0;
int idx =0;

        
        for(int i =0;i<n.size();i++) 
        {
            if(n[i]!=0){ ans*=n[i];}
            else{
ctr++;
idx=i;

            }
        }

 vector<int> v1(n.size(), 0);
           
        if(ctr>1)
        {
            return v1;

        }
        else if (ctr==1)
        {
            v1[idx]=ans;
            return v1;

        }

 vector<int> v2(n.size(), ans);
         for(int i =0;i<n.size();i++) 
        {
           v2[i]/=n[i];
        }

return v2;
    }
};