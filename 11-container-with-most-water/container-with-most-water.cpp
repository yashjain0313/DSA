class Solution {
public:
    int maxArea(vector<int>& h) {
        
        int l =0;
        int n = h.size();        
        int r = n-1;
        int m=0;
        while(l<r){
            int mn = min(h[l],h[r]);
            m=max(m,mn*(r-l));
            if(h[l]<h[r]){l++;}
            else{r--;}
        }
       return m; 
    }
};