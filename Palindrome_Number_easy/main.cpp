#include <iostream>
using namespace std;

bool isPalindrome(int x) {
    int x1 = x;
    long long rev = 0;

    while (x1 > 0) {
        int n = x1 % 10;
        rev = rev * 10 + n;
        x1 /= 10;
    }
    if (rev == x) {
        return true;
    }
    return false;
}

int main() {
    int x;
    cout << "Enter a number: ";
    cin >> x;
    if (isPalindrome(x)) {
        cout << "true";
    } else {
        cout << "false";
    }
    return 0;
}