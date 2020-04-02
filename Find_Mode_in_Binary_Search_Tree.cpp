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
    
    void inorder(TreeNode* root, vector<int>& trav)
    {
        if(root)
        {
            inorder(root->left, trav);
            trav.push_back(root->val);
            inorder(root->right, trav);
        }
    }
    vector<int> findMode(TreeNode* root) {
        vector<int> trav;
        inorder(root, trav);
        map<int, int> counts;
        vector<int> trav_set = trav;
        trav_set.erase(unique(trav_set.begin(), trav_set.end()), trav_set.end());
        for(int i=0;i<trav_set.size();i++)
        {
            counts[trav_set[i]] = 0;
        }
        
        for(int i=0;i<trav.size();i++)
        {
            counts[trav[i]] += 1;
        }
        
        int max_count = INT_MIN;
        int max_num;
        for(auto val: counts)
        {
            if(val.second > max_count)
            {
                max_count = val.second;
                max_num = val.first;
            }
        }
        
        vector<int> ans;
        for(auto val: counts)
        {
            if(val.second == max_count)
            {
                ans.push_back(val.first);
            }
        }
        
        return ans;
    }
};
