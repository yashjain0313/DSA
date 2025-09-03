class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        if(grid.empty()){ return 0;}
        int r = grid.size();
        int c = grid[0].size();
        int ans =0;
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(grid[i][j]=='1')
                {
                    ans++;
                    mark(grid,i,j);
                }
            }
        }
        return ans;
    }
private:
 void mark(vector<vector<char>>& grid , int i , int j )
    {
       if (i < 0 || i >= grid.size() || 
            j < 0 || j >= grid[0].size() || 
            grid[i][j] != '1') 
         {   return;}
        grid[i][j]='2';

        mark(grid,i+1,j);
        mark(grid,i-1,j);
        mark(grid,i,j+1);
        mark(grid,i,j-1);
        
}
};
