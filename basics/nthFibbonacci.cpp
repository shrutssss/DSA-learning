// Nth Fibbonacci number: 
// Problem statement: 
// The n-th term of Fibonacci series, *consider that indexing starts from 1.
// problem link: https://www.naukri.com/code360/problems/nth-fibonacci-number_74156

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    //declare first, second numbers of the series as 1. 
    //initialise a third variable as 0 for further use.
    int first=1,second=1,third=0;
    // for loop: starts from 3rd term (i=2 because we already have first two terms)
    for(int i=2;i<=n-1;i++){
        third=first+second;
        first=second;
        second=third;
    }
    //handling edge cases if input is 1 or 2
    //else printing the nth number from the series (stored in third variable).
    if(n==1||n==2){
        cout<<"1";
    }else{
        cout<<"The"<<n<<"th Fibbonacci number is: "<<third;
    }
    return 0;
}
