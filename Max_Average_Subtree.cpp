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
    
    double subTreeAvg(TreeNode* root)
    {
        if(!root)
        {
            return 0.0;
        }
        int count = 0;
        int sum = 0;
        queue<TreeNode*> que;
        que.push(root);
        while(!que.empty())
        {
            TreeNode* node = new TreeNode();
            node = que.front();
            que.pop();
            
            count++;
            sum += node->val;
            
            if(node->left)
            {
                que.push(node->left);
            }
            
            if(node->right)
            {
                que.push(node->right);
            }
        }
        
        return (double)sum/(double)count;
    }
    
    
    double maximumAverageSubtree(TreeNode* root) {
        if(!root)
        {
            return 0.0;
        }
        queue<TreeNode*> que;
        que.push(root);
        double maxAvg = DBL_MIN;
        while(!que.empty())
        {
            TreeNode* node = new TreeNode();
            node = que.front();
            que.pop();
            
            double avg = subTreeAvg(node);
            if(avg > maxAvg)
            {
                maxAvg = avg;
            }
            
            if(node->left)
            {
                que.push(node->left);
            }
            
            if(node->right)
            {
                que.push(node->right);
            }
        }
        
        return maxAvg;
        
    }
};
