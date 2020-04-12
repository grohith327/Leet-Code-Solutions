/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int closestValue(TreeNode* root, double target) {
        queue<TreeNode*> que;
        que.push(root);
        double diff = abs((double)root->val - target);
        int item = root->val;
        while(!que.empty())
        {
            TreeNode* node = new TreeNode();
            node = que.front();
            que.pop();
            
            if(abs((double)node->val - target) < diff)
            {
                item = node->val;
                diff = abs((double)node->val - target);
            }
            
            if(node->left)
                que.push(node->left);
            if(node->right)
                que.push(node->right);
        }
        
        return item;
    }
};
