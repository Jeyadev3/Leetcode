#include <iostream>
using namespace std;

class Solution {
public:
TreeNode* prev = nullptr;
    bool inorder(TreeNode* temp){
        if(temp == nullptr){
            return true;
        }
        if(!inorder(temp->left)){
            return false;
        }
        if(prev != nullptr && prev->val >= temp->val){
            return false;
        }
        prev = temp;
        return inorder(temp->right);
    }
    bool isValidBST(TreeNode* root) {
        return inorder(root);
    }
};