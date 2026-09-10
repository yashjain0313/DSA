class Solution {
public:
    int ans = 0;

    int dfs(TreeNode* root, int& sum, int& count) {
        if (root == nullptr) {
            sum = 0;
            count = 0;
            return 0;
        }

        int leftSum = 0, leftCount = 0;
        int rightSum = 0, rightCount = 0;

        dfs(root->left, leftSum, leftCount);
        dfs(root->right, rightSum, rightCount);

        sum = leftSum + rightSum + root->val;
        count = leftCount + rightCount + 1;

        if (sum / count == root->val) {
            ans++;
        }

        return 0;
    }

    int averageOfSubtree(TreeNode* root) {
        int sum = 0, count = 0;
        dfs(root, sum, count);
        return ans;
    }
};
