class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char, int> freq;
        for (char c : t) freq[c]++;

        int L = 0, R = 0;
        int required = t.size();
        int minLen = INT_MAX, start = 0;

        while (R < s.size()) {
            if (freq.find(s[R]) != freq.end()) {
                freq[s[R]]--;
                if (freq[s[R]] >= 0)
                    required--;
            }

            while (required == 0) {
                if (R - L + 1 < minLen) {
                    minLen = R - L + 1;
                    start = L;
                }

                if (freq.find(s[L]) != freq.end()) {
                    freq[s[L]]++;
                    if (freq[s[L]] > 0)
                        required++;
                }
                L++;
            }
            R++;
        }

        return minLen == INT_MAX ? "" : s.substr(start, minLen);
    }
};
