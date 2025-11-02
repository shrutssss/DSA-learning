//Print N to 1 without loop
//problem link: https://www.geeksforgeeks.org/problems/print-n-to-1-without-loop/1

#include <iostream>
using namespace std;

class Solution {
  public:
    void printNos(int N) {
        if(N==0) return;
        cout<<N<<" ";
        printNos(N-1);
    }
};

int main(){
    int n;
    cout<<"Enter n: "<<endl;
    cin>>n;
    Solution obj;
    obj.printNos(n);
}