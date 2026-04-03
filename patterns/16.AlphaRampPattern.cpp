//16. Alpha-Ramp Pattern
//problem link: https://www.geeksforgeeks.org/problems/triangle-pattern-1662285334/0

#include <iostream>
using namespace std;

class Solution {
  public:
    void printTriangle(int n) {
        //declare character ch as 'A' for printing alphabets
        char ch='A';
        //first for loop: n rows
        for(int i=0;i<n;i++){
            //while loop used instead of for loop as we want to print same alphabet for each row.
            while(ch<='A'+i){
                    //print ith alphabet, i times per row
                    for(int j=0;j<=i;j++){
                        cout<<ch;
                    }
                    //increase ch value for next row
                    ch++;
                }
            //end line for new row after printing ith alphabet for i times per row
            cout<<endl;
        }
    }
};

int main(){
    int n;
    cout<<"Enter n: "<<endl;
    cin>>n;
    Solution obj;
    obj.printTriangle(n);
}