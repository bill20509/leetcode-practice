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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> res;
        deque<TreeNode*> q;
        q.push_back(root);
        while(!q.empty()){
            double count = 0;
            int size = q.size();
            for(int i = 0; i < size; i++){
                TreeNode* temp = q.front(); q.pop_front();
                count += temp->val;
                if(temp->left)q.push_back(temp->left);
                if(temp->right)q.push_back(temp->right);
            }
            res.push_back(count / size);
        }
        return res;
    }
};