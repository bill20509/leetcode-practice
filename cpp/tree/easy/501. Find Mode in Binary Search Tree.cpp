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
    vector<int> findMode(TreeNode* root) {
        inorder(root);
        
        return res;
    }
private:
    int count = 0;
    int current = 0;
    int max = 0;
    
    vector<int> res;
    void inorder(TreeNode* root){
        if(!root)return;
        inorder(root->left);
        visit(root);
        inorder(root->right);
    }
    void visit(TreeNode* root){
        
        if(current != root->val){
            current = root->val;
            count = 0;
        }
        
        count++;
        if(count == max){
            res.push_back(root->val);
        }
        else if(count > max){
            res.clear();
            max = count;
            res.push_back(root->val);
        }
    
    }
};