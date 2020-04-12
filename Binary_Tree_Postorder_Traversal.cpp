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
    
    void traversal(TreeNode* root, vector<int> &trav_arr)
    {
        if(root)
        {
            traversal(root->left, trav_arr);
            traversal(root->right, trav_arr);
            trav_arr.push_back(root->val);
        }
    }
    
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> trav_arr;
        traversal(root, trav_arr);
        return trav_arr;
    }
};
