//5. Inverted Right pyramid of *
//problem link: https://www.geeksforgeeks.org/problems/triangle-pattern/1

#include <iostream>
using namespace std;

class Solution {
  public:

    void printTriangle(int n) {
        //first for loop: n rows
        for(int i=n;i>0;i--){
            //second for loop: print *, n to 1 times
            for(int j=0;j<i;j++){
                cout<<"* ";
            }
            cout<<endl;
        }
    }
};

int main(){
    int n;
    cout<<"Enter n for printing Inverted Right pyramid of *: "<<endl;
    cin>>n;
    Solution obj;
    obj.printTriangle(n);
}