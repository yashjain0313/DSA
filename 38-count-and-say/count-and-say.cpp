class Solution {
public:
    string count(string s) {
        string res = "";
        int i = 0;

        while (i < s.length()) {
            int cnt = 1;
            while (i + 1 < s.length() && s[i] == s[i + 1]) {
                cnt++;
                i++;
            }
            res += to_string(cnt);
            res += s[i];

            i++;
        }

        return res;
    }

    string countAndSay(int n) {
        unordered_map<int, string> mp;
        mp[1] = "1";
        for (int i = 2; i <= n; i++) {
            mp[i] = count(mp[i - 1]);
        }

        return mp[n];
    }
};
