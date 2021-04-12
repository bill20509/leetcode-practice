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
    bool isUnivalTree(TreeNode* root) {
        if(!root) return true;
        if(root->right && root->left){
            if(root->val != root->right->val || root->val !=root->left->val) return false;
            return isUnivalTree(root->right) && isUnivalTree(root->left);
        }
        else{
            if(root->right){
                if(root->right->val != root->val) return false;
                return isUnivalTree(root->right);
            }
            else if(root->left){
                if(root->left->val != root->val) return false;
                return isUnivalTree(root->left);
            }
        }
        return true;
    }
};