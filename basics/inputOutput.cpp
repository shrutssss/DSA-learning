//C++ Input / Output
//Given two integers A and B. Your task is to return their product.
//Problem link: https://www.geeksforgeeks.org/problems/c-input-output2432/1

#include <iostream>
using namespace std;

class Solution {
  public:
    int multiplication(int A, int B) {
        return A*B;
    }
};

int main(){
  int a,b;
  cout<<"Enter numbers to multipy: "<<endl;
  cin>>a>>b;
  Solution obj;
  obj.multiplication(a,b);
}