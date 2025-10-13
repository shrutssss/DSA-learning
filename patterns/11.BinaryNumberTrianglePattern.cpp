// Binary Number Triangle Pattern
// problem link: https://www.geeksforgeeks.org/problems/triangle-pattern-1661718455/1

#include <iostream>
using namespace std;

class Solution {
  public:
    void printTriangle(int n) {
        for(int i=1;i<=n;i++){
            for(int j=1;j<=i;j++){
                if((i+j) % 2 == 0){
                    cout<<1<<" ";
                }else{
                    cout<<0<<" ";
                }
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