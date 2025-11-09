class Solution {
public:
    int longestOnes(vector<int>& a, int k) {
        int n = a.size();
        int l = 0;
        int mx = 0;
        int z = 0;
        int r=0;
        while(r<n) {
            if (a[r] == 0) {
                z++;
            }

            while (z > k) {
                if (a[l] == 0) {
                    z--;
                }
                l++;
            }

            mx = max(mx, r - l + 1);
            r++;
        }

        return mx;
    }
};
