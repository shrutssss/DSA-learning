//Print GFG n times
//problem link: https://www.geeksforgeeks.org/problems/print-gfg-n-times/1

//Time complexity : O(N) 

#include <iostream>
using namespace std;

class Solution {
  public:
    void printGfg(int N) {
        //Base case: if N is 0 return without doing anything
        if(N==0) return; 
        //Recursively call function to print 
        printGfg(N-1);
        cout<<"GFG ";
    }
};

int main(){
    int n;
    cout<<"Enter n: "<<endl;
    cin>>n;
    Solution obj;
    obj.printGfg(n);
}