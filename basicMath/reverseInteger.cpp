// Reverse Integer
// Problem Link: https://leetcode.com/problems/reverse-integer/

// Notes:
// Signed integer range (32-bit):
//     INT_MIN = -2,147,483,648
//     INT_MAX =  2,147,483,647
//
// The range is based on the formula for signed integers:
//     Range: [ -2^(n-1), 2^(n-1) - 1 ]
// For a 32-bit signed int: [-2^31, 2^31 - 1]
//
// Overflow in C++:
// "If during the evaluation of an expression, the result is not mathematically defined
// or not in the range of representable values for its type, the behavior is undefined."

#include <iostream>
#include <climits>  // For INT_MAX and INT_MIN

using namespace std;

class Solution {
public:
    int reverse(int x) {
        int reverseNumber = 0;

        // Keep going until all digits are processed
        while (x != 0) {
            int lastDigit = x % 10;  // Get last digit
            x /= 10;                 // Remove last digit

            // Check for overflow/underflow before doing reverseNumber * 10 + lastDigit
            if (reverseNumber > INT_MAX / 10 || 
               (reverseNumber == INT_MAX / 10 && lastDigit > 7)) {
                return 0;
            }

            if (reverseNumber < INT_MIN / 10 || 
               (reverseNumber == INT_MIN / 10 && lastDigit < -8)) {
                return 0;
            }

            // Safe to build the reversed number
            reverseNumber = reverseNumber * 10 + lastDigit;
        }

        return reverseNumber;  // Final reversed result
    }
};

int main() {
    int x;
    cout << "Enter an integer to reverse: ";
    cin >> x;
    Solution obj;
    obj.reverse(number);
    return 0;
}

//COMPLEXITY ANALYSIS:
//Time Complexity: O(log_10(N)+1) where 10 is the base.
//here, number of iterations= log10(N) since we divide N by 10 until it becomes 0. it will run for n=0 too so the +1.

//Space Complexity: O(1) as only a constant amount of additional memory for the counter regardless of size of the input number.