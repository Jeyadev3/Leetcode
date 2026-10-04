#include <iostream>
using namespace std;

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        TreeNode* temp = root;
        if(root == nullptr){
            return nullptr;
        }
        if(temp->val > p->val && temp->val > q->val){
            return lowestCommonAncestor(root->left, p, q);
        }
        else if(temp->val < p->val && temp->val < q->val){
            return lowestCommonAncestor(temp->right, p ,q);
        }
        return root;
    }
};