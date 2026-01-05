class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        int index = 0;   

        for (int i = 0; i < n; ) {
            char current = chars[i];
            int count = 0;
            while (i < n && chars[i] == current) {
                i++;
                count++;
            }
            chars[index++] = current;

            if (count > 1) {
                string s = to_string(count);
                for (char c : s) {
                    chars[index++] = c;
                }
            }
        }

        return index;
    }
};
