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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(!root)
        {
            TreeNode* valNode = new TreeNode(val);
            return valNode;
        }
        TreeNode* node = new TreeNode();
        TreeNode* valNode = new TreeNode(val);
        node = root;
        while(true)
        {
            if(val < node->val)
            {
                if(node->left == NULL)
                {
                    node->left = valNode;
                    break;
                }
                
                node = node->left;
            }
            
            else
            {
                if(node->right == NULL)
                {
                    node->right = valNode;
                    break;
                }
                
                node = node->right;
            }
        }
        
        return root;
    }
};
