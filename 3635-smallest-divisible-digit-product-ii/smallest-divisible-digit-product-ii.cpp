class Solution {
public:
    string smallestNumber(string s, long long x) {
        long long y = x;

        for (int c = 2; c <= 9; c++) {
            while (y % c == 0){
                y /= c;
            }
        }
        if (y > 1)return "-1";
        int n = s.size();
        vector<long long> v(n + 1);
        v[0] = x;
        int p = n - 1;
        for (int i = 0; i < n; i++) {
            if (s[i] == '0') {
                p = i;
                break;
            }
            v[i + 1] = v[i] / gcd(v[i], 1LL * (s[i] - '0'));
        }
        if (v[n] == 1) return s;
        for (int i = p; i >= 0; i--) {
            while (++s[i] <= '9') {
                long long y = v[i] / gcd(v[i], 1LL * (s[i] - '0'));
                char c = '9';
                for (int j = n - 1; j > i; j--) {
                    while (y % (c - '0'))
                       { c--;}
                    y /= (c - '0');
                    s[j] = c;
                }
                if (y == 1)   return s;
            }
        }

        string t;

        for (char c = '9'; c >= '2'; c--) {
            while (x % (c - '0') == 0) {
                t += c;
                x /= (c - '0');
            }
        }

        t += string(max(n + 1 - (int)t.size(), 0), '1');
      reverse(t.begin(), t.end());

        return t;
    }
};