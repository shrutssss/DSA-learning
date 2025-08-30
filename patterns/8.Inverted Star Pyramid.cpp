//8. Inverted Star Pyramid
//problem link: https://www.geeksforgeeks.org/problems/triangle-pattern-1661493231/1

#include <iostream>
using namespace std;

class Solution {
  public:

    void printTriangle(int n) {
        for(int i=n;i>0;i--){
            for(int j=0;j<n-i;j++){
                cout<<" ";
            }
            for(int k=0;k<2*i-1;k++){
                cout<<"*";
            }
            cout<<endl;
        }
    }
};

int main(){
    int n;
    cout<<"Enter n: "<<endl'
    cin>>n;
    Solution obj;
    obj.printTriangle(n);
}