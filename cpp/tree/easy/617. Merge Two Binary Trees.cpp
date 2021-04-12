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
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        if(!root1 && !root2) return nullptr; 
        int l = root1? root1->val:0;
        int r = root2? root2->val:0;
        TreeNode* temp = new TreeNode(l + r);
        TreeNode* ln = root1? root1->left:nullptr;
        TreeNode* rn = root2? root2->left:nullptr;
        temp->left = mergeTrees(ln,rn);
        ln = root1? root1->right:nullptr;
        rn = root2? root2->right:nullptr;
        temp->right = mergeTrees(ln,rn);
        return temp;
    }
};