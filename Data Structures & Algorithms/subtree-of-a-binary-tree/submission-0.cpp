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
    bool sameTree(TreeNode* p , TreeNode* q) {
        if (p == nullptr && q == nullptr) return true;
        if (p == nullptr || q == nullptr) return false;
        return (p->val == q->val) &&
            sameTree(p->left , q->left) &&
            sameTree(p->right , q->right);
    }

    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if (root->val == subRoot->val) return sameTree(root , subRoot);
        TreeNode* curr = root , *prev;
        while (curr != nullptr && subRoot->val != curr->val) {
            prev = curr;
            if (subRoot->val < curr->val) curr = curr->left;
            else curr = curr->right;
        }
        if (prev->val != subRoot->val) {
            cout << prev->val << " " << subRoot->val << endl;
            return false;
        }
        return sameTree(curr , subRoot);
    }
};
