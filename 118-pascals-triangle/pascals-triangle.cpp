class Solution {
public:
    vector<vector<int>> generate(int numRows) {

        vector<vector<int>> grid;

        if (numRows >= 1) grid.push_back({1});
        if (numRows >= 2) grid.push_back({1,1});

        vector<int> last = {1,1};

        for (int i = 3; i <= numRows; i++) {
            vector<int> v1;
            v1.push_back(1); 

            for (int j = 1; j < last.size(); j++) {
                int x = last[j-1] + last[j];
                v1.push_back(x);
            }

            v1.push_back(1); 

            grid.push_back(v1);
            last = v1;
        }

        return grid;
    }
};
