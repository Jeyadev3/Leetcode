#include <iostream>

class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.length();
        string n2 = "";
        for(int i=0;i<n;i++){
            if(isalnum(s[i])){
                n2 += tolower(s[i]);
            }
        }
        int n1 = n2.length();
        int k = n1 - 1;
        for(int i=0;i<n1/2;i++){
            if(n2[i] != n2[k]){
                return false;
            }
            k--;
        }
        return true;
    }
};