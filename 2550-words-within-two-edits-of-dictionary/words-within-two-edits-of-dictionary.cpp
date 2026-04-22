class Solution {
public:
    vector<string> twoEditWords(vector<string>& queries, vector<string>& dictionary) {
         vector<string> result;
    for (int i = 0; i < queries.size(); i++) {
        string q = queries[i];
        bool found = false;

        for (int j = 0; j < dictionary.size(); j++) {
            string d = dictionary[j];

            if (q.size() != d.size()) continue;

            int diff = 0;
            for (int k = 0; k < q.size(); k++) {
                if (q[k] != d[k]) {
                    diff++;
                }
            }
            if (diff <= 2) {
                found = true;
                break;
            }
        }

        if (found) {
            result.push_back(q);
        }
    }

    return result;   
    }
};