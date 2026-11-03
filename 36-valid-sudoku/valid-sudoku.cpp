class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& b) {
        for(auto i : b)
        {   set<int>st;
            for(auto j : i){
                    if(j!='.'){
                        if(st.find(j)!=st.end()){ return false;}
                        else st.insert(j);
                    }
            }

        }
       
        int a =0;
        while(a<9)
       {   set<int>st;
        for(int i =0;i<9;i++){
            if(b[i][a]!='.'){
                        if(st.find(b[i][a])!=st.end()){ return false;}
                        else st.insert(b[i][a]);
                    }
        }
        a++;
        }
         for (int r = 0; r < 9; r += 3) {
            for (int c = 0; c < 9; c += 3) {

                set<char> st;

                for (int i = r; i < r + 3; i++) {
                    for (int j = c; j < c + 3; j++) {

                        if (b[i][j] != '.') {
                            if (st.find(b[i][j]) != st.end())
                                return false;

                            st.insert(b[i][j]);
                        }
                    }
                }
            }
        }

        return true;







    }
};