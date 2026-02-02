//14. Increasing Letter Triangle Pattern
//problem link: https://www.geeksforgeeks.org/problems/triangle-pattern-1662284916/0

#include <iostream>
using namespace std;

class Solution {
  public:
    void printTriangle(int n) {
      for(int i=0; i<n; i++){
        for(char ch='A';ch<='A'+i;ch++){
        cout<<ch;
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