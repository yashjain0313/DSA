class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        if (n == 0) return false;
        int m = matrix[0].size();
         if (target > matrix[n-1][m-1]) return false;
        int r=0;

        for(int i =0 ; i<n;i++)
        {
            if(matrix[i][m-1] >= target)
            {
                r=i;
                break;
            }
        }

        int l =0 ;
        int ri = m-1;

        while(l<=ri)
        {
            int mid= l+(ri-l)/2;
            if(matrix[r][mid]==target) {return true ;}

           if(matrix[r][mid] < target) { l=mid+1;}
           else{
            ri=mid-1;
           }

        }
return false;


        
    }
};