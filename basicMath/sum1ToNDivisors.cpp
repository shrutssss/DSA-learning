// Sum 1 to n Divisors
// problem link: https://www.geeksforgeeks.org/problems/sum-of-all-divisors-from-1-to-n4738/1

// notes:
// algorithm: 
// time complexity: 

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    long long sumOfDivisors(long long n) {
        long sum = 0;
        for(long i=1;i<=n;i++){
            sum += i * (n/i);
        }
        return sum;
    }
};

int main()[
    long long n;
    cout<<"Enter n: "<<endl;
    cin>>n;
    Solution obj;
    obj.sumOfDivisors(n);
]