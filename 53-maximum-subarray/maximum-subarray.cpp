class Solution {
public:
    int maxSubArray(vector<int>& arr) {
        int m = INT_MIN;
        int s = 0 ;
        int e = 0 ;
        int st = 0 ;
        int bs = 0 ;

        for(int i =0;i<arr.size();i++)
        { 
            s+=arr[i];
            if(s>m){ m = s;
            bs=st;
            e=i;}
            
            if(s<0) {s=0;
              st=i+1;
              }
        }
        cout<<st<<" "<<e;
        return m;
        
    }
};