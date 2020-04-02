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
    int getMinimumDifference(TreeNode* root) {
        vector<int> trav_arr;
        inorder(root, trav_arr);
        int minDiff = INT_MAX;
        for(int i = 0;i<trav_arr.size() - 1;i++)
        {
            if(minDiff > abs(trav_arr[i] - trav_arr[i+1]))
            {
                minDiff = abs(trav_arr[i] - trav_arr[i+1]);
            }
        }
        return minDiff;   
    }
};
