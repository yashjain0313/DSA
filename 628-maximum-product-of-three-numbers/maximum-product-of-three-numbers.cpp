class Solution {
public:
    int maximumProduct(vector<int>& a) {
        sort(a.begin(),a.end());
        int n = a.size();
        if(a[0]<0 && a[n-1]<0)
        {
            return a[n-1]*a[n-2]*a[n-3];
            cout<<"HHHHH";
        }
        if(a[0]>0)
      {  return a[n-1]*a[n-2]*a[n-3];}
        int p1=a[n-1]*a[n-2]*a[n-3];
        int p2=0;
        if(a[0]<0 && a[1]<0)
        {
            p2=a[0]*a[1];
        }
        p2*=a[n-1];
        if(p1>p2)
        {
            return p1;
        }
        else{
            return p2;
        }
        
    }
};