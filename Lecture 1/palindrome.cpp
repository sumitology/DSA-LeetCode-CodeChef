#include <iostream>
using namespace std;

bool isPalindrome(int x) {
    // Negative numbers and numbers ending with 0 (except 0 itself) are not palindromes
    if (x < 0 || (x % 10 == 0 && x != 0)) {
        return false;
    }
    
    int reversedHalf = 0;
    while (x > reversedHalf) {
        reversedHalf = reversedHalf * 10 + x % 10;
        x /= 10;
    }
    
    // Check if the original number (left half) matches the reversed right half
    // For odd-length numbers, discard the middle digit by reversedHalf / 10
    return x == reversedHalf || x == reversedHalf / 10;
}

int main() {
    int x = 121;
    cout << boolalpha << isPalindrome(x) << endl; // Output: true

    x = -121;
    cout << boolalpha << isPalindrome(x) << endl; 

    x = 10;
    cout << boolalpha << isPalindrome(x) << endl; 

    return 0;
}
