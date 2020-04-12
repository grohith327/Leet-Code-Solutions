/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    
    void traversal(Node* root, vector<int> &trav_arr)
    {
        if(root)
        {
            for(int i=0;i<root->children.size();i++)
                traversal(root->children[i], trav_arr);
            trav_arr.push_back(root->val);
        }
    }

    
    vector<int> postorder(Node* root) {
        vector<int> trav_arr;
        traversal(root, trav_arr);
        return trav_arr;
    }
};
