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
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return dfs(nums, 0, nums.size()-1);
    }
    TreeNode* dfs(vector<int>& nums, int l, int r){
        if(l > r) return nullptr;
        TreeNode* temp= new TreeNode(nums[(l+r)/2]);
        temp->left = dfs(nums, l, (l+r)/2 -1);
        temp->right = dfs(nums, (l+r)/2 + 1, r);
        return temp;
    }
};