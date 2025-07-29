//3. Right-Angled Number pyramid
//Print right-angled triangle pattern of numbers (1,2,3,4...n)
//Problem link: https://www.geeksforgeeks.org/problems/triangle-number/1

#include <iostream>
using namespace std;

class Solution {
  public:
    void printTriangle(int n) {
        //first for loop: n rows, one row per 'i'.
        for(int i=1;i<=n;i++){
            //second for loop: for every i, this prints numbers 1 to i for each row.
            for(int j=1;j<=i;j++){
                cout<<j<<" ";
            }
            //once 1 to i numbers are printed, we end the line for the next row.
            cout<<endl;  
        }
    }
};

int main(){
    int n;
    cout<<"Enter n for printing right-angled triangle pattern of numbers (1,2,3,4...n): "<<endl;
    cin>>n;
    Solution obj;
    obj.printTriangle(n);
}