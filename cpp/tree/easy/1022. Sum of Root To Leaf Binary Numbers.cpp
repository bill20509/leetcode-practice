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
    int sumRootToLeaf(TreeNode* root) {
        return f(root, 0);
    }
    int f(TreeNode* root, int count){
        count += root->val;
        if(root->left && root->right){
            return f(root->left, count*2) + f(root->right, count*2);
        }
        else if(root->left || root->right){
            if(root->left) return f(root->left, count*2);
            else return f(root->right, count*2);
        }
        else{
            return count;
        }
    }
};