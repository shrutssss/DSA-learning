// 10. Half Diamond Star Pattern
//problem link: https://www.geeksforgeeks.org/problems/triangle-pattern-1661718013/1

#include <iostream>
using namespace std;

class Solution {
  public:
    void printTriangle(int n) {
        for(int i=0;i<n-1;i++){
        for(int j=0;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
        }
        for(int i=0;i<n;i++){
                cout<<"* ";
        }
        cout<<endl;
        for(int i=0;i<n-1;i++){
            for(int j=n-1;j>i;j--){
                cout<<"* ";
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
    obj.printTriangle(n)
}