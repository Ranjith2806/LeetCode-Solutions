/* Given the root of a binary tree, return the preorder traversal of its nodes' values.

 

Example 1:


Input: root = [1,null,2,3]
Output: [1,2,3] */
class Solution {
public:
    void preorder(TreeNode* root, vector<int>&v)
    {
        if(root==NULL)
            return;
        v.push_back(root->val);
        preorder(root->left,v);
        preorder(root->right,v);
    }
    vector <int> preorderTraversal(TreeNode* root)
    {
        vector <int> v;
        preorder(root,v);
        return v;
        //Time Complexity:O(n)
        //Space Complexity:O(n)
    }
};
