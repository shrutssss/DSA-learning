//Sum of first n terms
//problem link: https://www.geeksforgeeks.org/problems/sum-of-first-n-terms5843/1

#include <iostream>
using namespace std;

class Solution {
  public:
    int sumOfSeries(int n) {
        //Base case: if n is 1, simply return 1 as cube of 1 is 1 itself.
        if(n==1) return 1;
        //Recurively call function to return cube of n and then of n-1.. so on till n is 1
        return n*n*n+sumOfSeries(n-1);
    }
};

int main(){
    int n;
    cout<<"Enter n: "<<endl;
    cin>>n;
    Solution obj;
    obj.sumOfSeries(n);
}