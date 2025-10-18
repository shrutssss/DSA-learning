// LCM and GCD
//problem link: https://www.geeksforgeeks.org/problems/lcm-and-gcd4516/1

//Euclidean Algorithm: GCD(a,b) = GCD(a%b,b) where a>b
// 1. use a while loop so that it runs till a or b becomes 0
// 2. in loop, do greater_number%smaller_number until one of them becomes 0
// if a===0 then b is the GCD and vice versa.

#include <iostream>
#include <vector>
using namespace std;

class Solution {
  public:
    vector<int> lcmAndGcd(int a, int b) {
        int a1=a; int b1=b;
        int gcd; int lcm;
        while(a1>0 && b1>0){
            if(a1>b1){
                a1=a1%b1;
            }else{
                b1=b1%a1;
            }
        }
        if(a1==0){
            gcd=b1;
        }else{
            gcd=a1;
        }
        lcm = (a/gcd)*b;
        vector<int> v={lcm,gcd};
        return v;
    }
};

int main(){
    int a,b;
    cout<<"Enter a,b : "<<endl;
    cin>>a>>b;
    Solution obj;
    obj.lcmAndGcd(a,b);
}