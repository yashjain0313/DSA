/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int lefth(TreeNode* root)
    {
        if(root==nullptr)
        {
            return 0;
        }

        int a = lefth(root->left);
        int b=lefth(root->right);

        return max(a,b)+1;
    }
    bool isBalanced(TreeNode* root) {
        if(root==nullptr)
        {
            return true;
        }
        int a=lefth(root->left);
        int b=lefth(root->right);
        if((a-b)==1 || (a-b)==-1 || (a-b)==0)
        {
            if(isBalanced(root->left) && isBalanced(root->right)){
                return true;
            }else{
                return false;
            }
        }
        else{
            return false;
        }
        
    }
};