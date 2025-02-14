/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int minDepth(TreeNode* root) {
        if(root == NULL) return 0;
        int leftdepth =0,rightdepth =0;
        leftdepth =minDepth(root->left);
        rightdepth = minDepth(root->right);
        if(root->right == NULL && root->left== NULL) return 1;
        if(root->left == NULL) return  1 + rightdepth;
        if(root->right == NULL) return 1+leftdepth;
        return min(leftdepth,rightdepth) + 1; 
    }
};