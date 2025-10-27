//13. Increasing Number Triangle
//problem link: https://www.geeksforgeeks.org/problems/triangle-pattern-1661718712/1

#include <iostream>
using namespace std;

class Solution {
  public:
    void printTriangle(int n) {
        int num=1;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=i;j++){
                cout<<num<<" ";
                num++;
            }
            cout<<endl;
        }
    }
};

int main(){
    int n;
    cout<<"Enter n for this pattern: "<<endl;
    cin>>n;
    Solution obj;
    obj.printTriangle(n);
}