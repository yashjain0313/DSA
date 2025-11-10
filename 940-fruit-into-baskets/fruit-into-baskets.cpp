#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
public:
    int totalFruit(vector<int>& f) {
        int l = 0, maxLen = 0;
        unordered_map<int, int> mp;

        for (int r = 0; r < f.size(); ++r) {
            mp[f[r]]++;

            while (mp.size() > 2) {
                mp[f[l]]--;
                if (mp[f[l]] == 0) {
                    mp.erase(f[l]);
                }
                l++;
            }

            maxLen = max(maxLen, r - l + 1);
        }

        return maxLen;
    }
};