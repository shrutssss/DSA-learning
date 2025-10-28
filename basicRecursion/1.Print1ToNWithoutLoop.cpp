//Print 1 To N Without Loop
// problem link: https://www.geeksforgeeks.org/problems/print-1-to-n-without-using-loops-1587115620/1

#include <iostream>
using namespace std;

class Solution {
  public:
    void printNos(int n) {
        if(n==0) return;
        printNos(n-1);
        cout<<n<<" ";
    }
};

int main(){
    int n;
    cout<<"Enter n: "<<endl;
    cin>>n;
    Solution obj;
    obj.printNos(n);
}