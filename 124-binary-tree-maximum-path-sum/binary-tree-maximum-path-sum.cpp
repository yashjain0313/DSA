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
   
    int maxPathSum(TreeNode* root) {
int m=INT_MIN;
maxPath(root,m);
return m;

    }

int maxPath(TreeNode*node , int &m)
{
    if(node==NULL) return 0;
    int lp =max(0,maxPath(node->left,m));
    int rp =max(0,maxPath(node->right,m));

    m = max(m, lp+rp+node->val);

    return max(lp,rp)+node->val;

}
};