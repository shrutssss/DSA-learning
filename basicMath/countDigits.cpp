// Count Digits:
// Given a positive integer n, count the number of digits in n that divide n evenly (i.e., without leaving a remainder).
// Return the total number of such digits.
// Problem link: https://www.geeksforgeeks.org/problems/count-digits5716/1

#include <iostream>
using namespace std;

class Solution {
  public:
    // Function to count the number of digits in n that evenly divide n
    int evenlyDivides(int n) {
        int count = 0; // to count digits that divide n
        int original_number = n; // store the original value of n

        while(n > 0){
            int digit = n % 10; // extract last digit

            // avoid division by zero
            if(digit != 0 && original_number % digit == 0){
                count++; // digit divides n evenly
            }

            n /= 10; // remove last digit
        }

        return count; // return final answer
    }
};

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n; // take input

    Solution obj;
    int result = obj.evenlyDivides(n); // call the function

    cout << "Number of digits that evenly divide " << n << " = " << result << endl;

    return 0;
}
