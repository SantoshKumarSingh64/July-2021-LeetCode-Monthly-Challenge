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
        
        if(root == NULL)
        {
            return NULL;
        }

        if((root == p)||( root == q))
        {
            return root;
        }

        TreeNode* left_LCA = lowestCommonAncestor(root->left,p,q);
        TreeNode* right_LCA = lowestCommonAncestor(root->right,p,q);

        if(left_LCA != NULL && right_LCA != NULL)
        {
            return root;
        }
        else if(left_LCA != NULL)
        {
            return left_LCA;
        }
        else
        {
            return right_LCA;
        }
    }
};
