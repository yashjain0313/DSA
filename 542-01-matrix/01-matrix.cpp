class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int m=mat.size();
        int n=mat[0].size();
        //create an answer matrix and initialise it as -1 at the begining
        queue<pair<int,int>>q;
        //pair because we need to store row as well as column
        vector<vector<int>>result(m,vector<int>(n,-1));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(mat[i][j]==0){
                    result[i][j]=0;
                    //push this onr into the queue
                    q.push({i,j});
                }
            }
        }
        int delrow[4]={-1,0,+1,0};
        int delcol[4]={0,1,0,-1};
        while(!q.empty()){
            pair<int,int>p=q.front();
            // pop out the first element from the queue
            q.pop();
            //find out the neighbour and push them into the stack
             for(int i=0;i<4;i++){
                int newrow=p.first+delrow[i];
                int newcol=p.second+delcol[i];
                //check out the validity
                if(newrow>=0 && newrow<m && newcol>=0 && newcol<n && result[newrow][newcol]==-1){
                    //this onre it a valid
                    //push this into the queue
                    result[newrow][newcol]=result[p.first][p.second]+1;
                     q.push({newrow, newcol}); 
                }
             }
        }
        return result;

    }
};