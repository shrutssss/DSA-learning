//17. Alpha-Hill Pattern
//problem link: https://www.geeksforgeeks.org/problems/triangle-pattern-1662285911/1

#include <iostream>
using namespace std;

class Solution {
  public:
    void printTriangle(int n) {
        for(int i=0;i<n;i++){
            for(int j=n-i-2;j>=0;j--){
                cout<<" ";
            }
            for(char ch='A';ch<='A'+i;ch++){
                cout<<ch;
            if(ch=='A'+i){
              for(char ch2='A'+i-1;ch2>='A';ch2--){
                    cout<<ch2;
                }
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