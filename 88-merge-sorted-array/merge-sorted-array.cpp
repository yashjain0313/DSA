#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    void shift(vector<int>& n1, int a) {
        for (int i = n1.size() - 2; i >= a; i--) {
            n1[i + 1] = n1[i];
        }
    }

    void merge(vector<int>& n1, int m, vector<int>& n2, int n) {
        int j = 0;
        int size = m;

        for (int i = 0; i < n1.size() && j < n; i++) {
            if (j < n && n2[j] <= n1[i]) {
                shift(n1, i);
                n1[i] = n2[j];
                j++;
                size++;
            }
        }
        while (j < n) {
            n1[size++] = n2[j++];
        }
        for (int i = 0; i < n1.size(); i++) {
            cout << n1[i] << " ";
        }
    }
};
