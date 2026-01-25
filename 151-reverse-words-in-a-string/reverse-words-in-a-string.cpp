class Solution {
public:
    string reverseWords(string s) {
   stack<string> st;
    string word = "";

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ') {
            if (word != "") {
                st.push(word);
                word = "";
            }
        } else {
            word += s[i];
        }
    }

    if (word != "") st.push(word); 

    string result = "";
    while (!st.empty()) {
        result += st.top();
        st.pop();
        if (!st.empty()) result += " ";
    }

    return result;
    }
};