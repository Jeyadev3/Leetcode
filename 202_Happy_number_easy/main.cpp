#include <iostream>

class Solution {
public:
    bool isHappy(int n) {
        int arr[500];
        int i=0;
        while(1){
            int sum = 0;
            arr[i] = n;
            i++;
            while(n>0){
                int dig = n % 10;
                sum += dig*dig;
                n /= 10;
            }
            if(sum == 1){
                return true;
            }
            for(int j=0;j<i;j++){
                if(sum == arr[j]){
                    return false;
                }
            }
            n = sum;
        }
    }
};