//If-else concept
//problem: Given two integers, n and m. The task is to check the relation between n and m. Return "lesser" if n < m,  "equal" if n == m, and "greater" if n > m.
//problem link: https://www.geeksforgeeks.org/problems/java-if-else-decision-making0924/1

#include <iostream>
using namespace std;

class Solution {
  public:
    string compareNM(int n, int m) {
        if(n<m){
            return "lesser";
        }
        else if(n>m){
            return "greater";
        }
        else{
            return "equal";   
        }
    }
};

int main(){
    int n,m;
    cout<<"Enter number n: "<<endl;
    cin>>n;
    cout<<"Enter number m: "<<endl;
    cin>>m;
    Solution obj;
    //print the relation as only obj.compareNM(n,m) won't print it.
    cout<<obj.compareNM(n,m)<<endl;
}