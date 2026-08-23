class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int t) {
       
       int l = 0;
       int h = mat.size()-1;
       while(l<=h)
       {
        int m = l+(h-l)/2;
        if(mat[m][0]==t) return true;
        if(mat[m][0]>t){
             h=m-1;
         }
         else{
            l=m+1;
        }
       }
            if(h < 0)
            return false;
        cout<<h<<endl;
       int left = 0;
       int high = mat[0].size()-1;
       int ans =0;
       while(left<=high)
       {
        int m = left+(high-left)/2;
        if(mat[h][m]==t) return true;
        if(mat[h][m]>t){
             high=m-1;
         }
         else{
            left=m+1;
        }
       }

    return false;
    }
};