class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& a) {

        vector<vector<int>> grid;
        if (a.empty()) return grid;

        sort(a.begin(), a.end());

        int l = a[0][0];
        int r = a[0][1];

        for (int i = 1; i < a.size(); i++) {
            if (a[i][0] <= r) {
                r = max(r, a[i][1]);
            } else {
                grid.push_back({l, r});
                l = a[i][0];
                r = a[i][1];
            }
        }

        grid.push_back({l, r});
        return grid;
    }
};
