class Solution {
public:
    int strStr(string h, string n) {
for(int i = 0; i < h.size(); i++) {
            if(n[0] == h[i]) {
                int j = 0, k = i;
                while(j < n.size() && n[j] == h[k]) {
                    k++;
                    j++;
                }
                if(j == n.size()) return i;
            }
        }
        return -1;
    }
};