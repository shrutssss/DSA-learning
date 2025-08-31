// Count Digits:
// Given a positive integer n, count the number of digits in n that divide n evenly (i.e., without leaving a remainder).
// Return the total number of such digits.
// Problem link: https://www.geeksforgeeks.org/problems/count-digits5716/1

#include <iostream>
using namespace std;
class Solution {
  public:
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

//COMPLEXITY ANALYSIS:
//Time Complexity: O(log_10(N)+1) where 10 is the base.
//here, number of iterations= log10(N) since we divide N by 10 until it becomes 0. it will run for n=0 too so the +1.

//Space Complexity: O(1) as only a constant amount of additional memory for the counter regardless of size of the input number.