//Prime Number
//Given a number n, determine whether it is a prime number or not.
//Problem link: https://www.geeksforgeeks.org/problems/prime-number2314/1

#include <iostream>
using namespace std;
class Solution {
public:
    bool isPrime(int n) {
        //prime numbers are greater than 1
        if (n <= 1) {
            return false;
        }
        //check for any divisor from 2 to sqrt(n)
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                return false; //found a divisor: not prime
            }
        }
        return true; //no divisors found: prime
    }
};

int main() {
    Solution sol;
    int n;
    cout << "Enter a number to check if it's prime: ";
    cin >> n;
    if (sol.isPrime(n)) {
        cout << n << " is a prime number.\n";
    } else {
        cout << n << " is NOT a prime number.\n";
    }
    return 0;
}
