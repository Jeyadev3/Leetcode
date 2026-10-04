#include <iostream>
using namespace std;

class Solution {
public:
int count = 0;
int ans;
    void inorder(TreeNode* temp, int k){
        if(temp == nullptr){
            return;
        }
        inorder(temp->left, k);
        count++;
        if(count == k){
            ans = temp->val;
            return;
        }
        inorder(temp->right, k);        
    }
    int kthSmallest(TreeNode* root, int k) {
        TreeNode* temp = root;
        inorder(temp, k);
        return ans;
    }
};