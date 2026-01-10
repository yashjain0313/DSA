class Solution {
    private:
    void dfs(int row,int col,vector<vector<int>>& grid,vector<vector<int>>&vis,int delrow[],int delcol[]){
        vis[row][col]=1;
         int m=grid.size();
        int n=grid[0].size();
        //find out the neighbour 
        for(int i=0;i<4;i++){
            int newrow=row+delrow[i];
            int newcol=col+delcol[i];
            //check the validity
            if(newrow>=0 && newrow<m && newcol>=0 && newcol<n && grid[newrow][newcol]==1 && !vis[newrow][newcol]){
                dfs(newrow,newcol,grid,vis,delrow,delcol);
            }
        }

    }
public:
    int numEnclaves(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        int delrow[4]={-1,0,1,0};
        int delcol[4]={0,+1,0,-1};
        vector<vector<int>>vis(m,vector<int>(n,0));
        //find out the 1st row and last row so we need to traverse to the entire column for that
        for(int i=0;i<n;i++){
            //row remain the same a 0 for 1st row
            if(grid[0][i]==1 && !vis[0][i]){
                dfs(0,i,grid,vis,delrow,delcol);
            }//for last row 
             if(grid[m-1][i]== 1 && !vis[m-1][i]){
                dfs(m-1,i,grid,vis,delrow,delcol);
            }
        }
        //same for col so we need to traverse the entire row
        for(int i=0;i<m;i++){
            //for 1st col 
            if(grid[i][0]== 1 && !vis[i][0]){
                dfs(i,0,grid,vis,delrow,delcol);
            }
            //for last column
            if(grid[i][n-1]== 1 && !vis[i][n-1]){
                dfs(i,n-1,grid,vis,delrow,delcol);
            }
        }
        //after traversing the entire boundary if we found any grid[i][j]==1 and this was not visited previously so we just cnt them
        int cnt=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]== 1 && !vis[i][j]){
                    cnt++;
                }
            }
        }
        return cnt;
        }
    
};