//4.Right-Angled Number Pyramid-II
//problem link: 

#include <iostream>
using namespace std;

class Solution {
  public:
    void printTriangle(int n) {
        //first for loop: n rows
        for(int i=1;i<=n;i++){
            //second for loop: print i, 1 to i times till i=n.
            for(int j=1;j<=i;j++){
                cout<<i<<" ";
            }
            //change to next row.
            cout<<endl;
        }
    }
};

int main(){
    int n;
    cout<<"Enter n for printing Right-Angled Number Pyramid:  "<<endl;
    cin>>n;
    Solution obj;
    obj.printTriangle(n);
    return 0;
}