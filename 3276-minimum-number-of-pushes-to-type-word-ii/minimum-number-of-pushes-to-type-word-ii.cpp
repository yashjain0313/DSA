class Solution {
public:
    int minimumPushes(string w) {
    map<char, int> mp;
        for (char c : w) {
            mp[c]++;
        }
        vector<pair<char, int>> v(mp.begin(), mp.end());
        sort(v.begin(), v.end(), [](const auto &a, const auto &b) {
            return a.second > b.second;
        });

        vector<int> value(26, 0);
        for (int i = 0; i < v.size(); i++) {
            value[v[i].first - 'a'] = i / 8 + 1;
        }

        int ans = 0;

        for (char c : w) {
            ans += value[c - 'a'];
        }

        return ans;
    }
};