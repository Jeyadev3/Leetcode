#include <iostream>
using namespace std;

class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        if(root == nullptr){
            return nullptr;
        }
        TreeNode* temp = root;
        while(temp != nullptr){
            if(temp->val == val){
                return temp;
            }
            else if(temp->val > val){
                temp = temp->left;
            }
            else{
                temp = temp->right;
            }
        }
        return nullptr;
    }
};