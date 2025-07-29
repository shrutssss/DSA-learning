// Nth Fibbonacci number: 
// Problem statement: 
// The n-th term of Fibonacci series F(n), where F(n) is a function, is calculated using the following formula 
// F(n) = F(n - 1) + F(n - 2), 
//     Where, F(1) = 1, F(2) = 1
// Provided 'n' you have to find out the n-th Fibonacci Number. Handle edges cases like when 'n' = 1 or 'n' = 2 by using conditionals like if else and return what's expected.
// problem link: https:www.naukri.com/code360/problems/nth-fibonacci-number_74156

// my solution:
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int first=1,second=1,third=0;
    for(int i=2;i<=n-1;i++){
        third=first+second;
        first=second;
        second=third;
    }
    if(n==1||n==2){
        cout<<"1";
    }else{
        cout<<third;
    }
    return 0;
}
