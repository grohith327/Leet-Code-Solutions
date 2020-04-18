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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        
        if(!p && !q)
            return true;
        
        if((!p && q) || (p && !q))
            return false;
        
        queue<TreeNode*> queP, queQ;
        queP.push(p);
        queQ.push(q);
        while(!queP.empty() && !queQ.empty())
        {
            TreeNode* nodep = new TreeNode();
            TreeNode* nodeq = new TreeNode();
            nodep = queP.front();
            queP.pop();
            nodeq = queQ.front();
            queQ.pop();
            
            if(nodep->val != nodeq->val)
                return false;
            else
            {
                if(nodep->left && nodeq->left)
                {
                    if(nodep->left->val != nodeq->left->val)
                        return false;
                }
                
                if((!nodep->left && nodeq->left) || (nodep->left && !nodeq->left))
                    return false;
                
                if(nodep->right && nodeq->right)
                {
                    if(nodep->right->val != nodeq->right->val)
                        return false;
                }
                
                if((!nodep->right && nodeq->right) || (nodep->right && !nodeq->right))
                    return false;
            }
            
            if(nodep->left)
                queP.push(nodep->left);
            if(nodep->right)
                queP.push(nodep->right);
            
            if(nodeq->left)
                queQ.push(nodeq->left);
            if(nodeq->right)
                queQ.push(nodeq->right);
            
                
        }
        if(queP.size() != queQ.size())
            return false;
    
        return true;
    }
};

