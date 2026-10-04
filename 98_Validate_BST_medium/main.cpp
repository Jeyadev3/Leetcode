#include <iostream>
using namespace std;

class Solution {
public:
    bool Validate(TreeNode* root, long min, long max){
        if(root == nullptr){
            return true;
        }
        if(root->val <= min || root->val >= max){
            return false;
        }
        return Validate(root->left, min, root->val) && Validate(root->right, root->val, max);
    }
    bool isValidBST(TreeNode* root) {
        return Validate(root, LONG_MIN, LONG_MAX);
    }
};