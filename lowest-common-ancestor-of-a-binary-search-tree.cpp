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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
     if(!root)return NULL;
     int a = p->val;
     int b = q->val;
     while(root){
        if(root->val > a && root->val > b) root = root->left;
        else if(root->val < a && root->val < b) root= root->right;
        else return root;
     }
     return NULL;   
    }
};