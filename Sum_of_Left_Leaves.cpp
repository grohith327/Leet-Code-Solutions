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
    int sumOfLeftLeaves(TreeNode* root) {
        if(!root)
        {
            return 0;
        }
        queue<TreeNode*> que;
        que.push(root);
        int sum = 0;
        while(!que.empty())
        {
            TreeNode* node = new TreeNode();
            node = que.front();
            que.pop();
            
            if(node->left != NULL)
            {
                if(node->left->left == NULL && node->left->right == NULL)
                {
                    sum += node->left->val;
                }
                que.push(node->left);
            }
            
            if(node->right != NULL)
            {
                que.push(node->right);
            }
        }
        
        return sum;
    }
};
