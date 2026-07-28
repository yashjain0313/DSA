class Solution {
public:
    string smallestPalindrome(string s) {
    map<char, int> freq;

for(char c : s)
    freq[c]++;

string left = "", mid = "";

for(auto it : freq) {
    left += string(it.second / 2, it.first);

    if(it.second % 2 == 1 && mid.empty())
        mid = it.first;
}

string right = left;
reverse(right.begin(), right.end());

return left + mid + right;
        
    }
};