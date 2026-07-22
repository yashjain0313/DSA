class Solution {
public:
    string reverseVowels(string s) {
        vector<char> v;
        vector<int>p;

        for (int i = 0; i < s.size(); i++) {
            char ch = s[i];

            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
                v.push_back(ch);
                p.push_back(i);
            }
        }
        int l = v.size()-1;
           for (int i = 0; i < v.size(); i++) {
            s[p[i]] = v[l];
            l--;
        }
        return s;
    }
};
