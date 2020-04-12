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
    TreeNode* searchBST(TreeNode* root, int val) {
        if(!root)
            return NULL;
        queue<TreeNode*> que;
        que.push(root);
        while(!que.empty())
        {
            TreeNode* node  = new TreeNode();
            node = que.front();
            que.pop();
            
            if(node->val == val)
                return node;
            
            if(node->left)
                que.push(node->left);
            if(node->right)
                que.push(node->right);
        }
        
        return NULL;
    }
};
