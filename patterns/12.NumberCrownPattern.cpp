// Number Crown Pattern
//problem link: https://www.geeksforgeeks.org/problems/double-triangle-pattern-1662664259/1
//after working on 11 patterns i could get the while logic by myself for this 12th pattern!

#include <iostream>
using namespace std;

class Solution {
  public:
    void printTriangle(int n) {
        for(int i=1;i<=n;i++){
            //numbers
            for(int j=1;j<=i;j++){
                cout<<j<<" ";
            }
            //space
            for(int k=1;k<=2*(n-i);k++){
                cout<<"  ";
            }
            //numbers
            for(int j=i;j>=1;j--){
                cout<<j<<" ";
            }
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