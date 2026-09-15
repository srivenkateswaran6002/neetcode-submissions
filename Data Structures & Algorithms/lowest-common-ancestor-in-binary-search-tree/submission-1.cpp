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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        int d = root->val , x = p->val , y = q->val;
        if (root == nullptr) return nullptr;
        if (d < x && d < y) return lowestCommonAncestor(root->right , p , q);
        else if (d > x && d > y) return lowestCommonAncestor(root->left , p , q);
        else return root;
    }
};
