//While loop concept
//Problem statement: To print table of 'n' having 10 multiples in reverse order.
//Problem link: https://www.geeksforgeeks.org/problems/while-loop-printtable-java/1

#include <iostream>
using namespace std;

class Solution {
  public:
    void calculateMultiples(int n) {
        //initialize variable i to 10 as we want 10 multiples in reverse order.
        int i=10;
        //while loop runs from i=10 to i=0 where the loop doesn't run for i=0 as the condition(i>0) isn't satisfied.
        while(i>0){
            //printing 10 multiples of n in reverse order.
            cout<<n*i<<" ";
            i--;
        }
    }
};

int main(){
    int n;
    cout<<"Enter n for printing it's table(10 multiples) in reverse order: "<<endl;
    cin>>n;
    Solution obj;
    obj.calculateMultiples(n);
}