class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> res;
        ///stack can also be used
        

        preorder(root, res);
        return res;        
    }

private:
    void preorder(TreeNode* node, std::vector<int>& res) {
        if (node == nullptr) {
            return;
        }

        res.push_back(node->val);
        preorder(node->left, res);
        preorder(node->right, res);
    }    
};