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
    
    void inorder(TreeNode* root, vector<int>& trav_arr)
    {
        if(root)
        {
            inorder(root->left, trav_arr);
            trav_arr.push_back(root->val);
            inorder(root->right, trav_arr);
        }
    }
    bool isValidBST(TreeNode* root) {
        vector<int> trav_arr;
        inorder(root, trav_arr);
        vector<int> sorted_trav_arr = trav_arr;
        sort(sorted_trav_arr.begin(), sorted_trav_arr.end());
        if(sorted_trav_arr == trav_arr)
        {
            sorted_trav_arr.erase( unique( sorted_trav_arr.begin(), sorted_trav_arr.end() ), sorted_trav_arr.end() );
            if(sorted_trav_arr == trav_arr)
            {
                return true;
            }
            return false;
        }
        return false;
    }
};
