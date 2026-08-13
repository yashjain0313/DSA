class Solution {
    struct Node {
        int len, pre, suf, ans;
        char l, r;
    };

    vector<Node> st;

    Node merge(Node a, Node b) {
        if (a.len == 0) return b;
        if (b.len == 0) return a;

        Node c;
        c.len = a.len + b.len;
        c.l = a.l;
        c.r = b.r;

        c.pre = a.pre;
        if (a.pre == a.len && a.r == b.l)
            c.pre += b.pre;

        c.suf = b.suf;
        if (b.suf == b.len && a.r == b.l)
            c.suf += a.suf;

        c.ans = max(a.ans, b.ans);
        if (a.r == b.l)
            c.ans = max(c.ans, a.suf + b.pre);

        return c;
    }

    void build(int p, int l, int r, string &s) {
        if (l == r) {
            st[p] = {1, 1, 1, 1, s[l], s[l]};
            return;
        }

        int m = (l + r) / 2;
        build(p * 2, l, m, s);
        build(p * 2 + 1, m + 1, r, s);

        st[p] = merge(st[p * 2], st[p * 2 + 1]);
    }

    void update(int p, int l, int r, int idx, char ch) {
        if (l == r) {
            st[p] = {1, 1, 1, 1, ch, ch};
            return;
        }

        int m = (l + r) / 2;

        if (idx <= m)
            update(p * 2, l, m, idx, ch);
        else
            update(p * 2 + 1, m + 1, r, idx, ch);

        st[p] = merge(st[p * 2], st[p * 2 + 1]);
    }

public:
    vector<int> longestRepeating(string s, string queryCharacters,
                                 vector<int>& queryIndices) {
        int n = s.size();
        st.resize(4 * n);

        build(1, 0, n - 1, s);

        vector<int> ans;

        for (int i = 0; i < queryIndices.size(); i++) {
            update(1, 0, n - 1, queryIndices[i], queryCharacters[i]);
            ans.push_back(st[1].ans);
        }

        return ans;
    }
};