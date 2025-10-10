//9. Diamond Star Pattern
//problem link: 

#include <iostream>
using namespace std;

void nStarDiamond(int n) {
    for(int i=0;i<n;i++){
        for(int j=n-i-1;j>0;j--){
            cout<<" ";
        }
        for(int k=1;k<=2*i+1;k++){
            cout<<"*";
        }
        for(int l=n-i-1;l>0;l--){
            cout<<" ";
        }
        cout<<endl;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        for(int k=2*n-(2*i+1);k>0;k--){
            cout<<"*";
        }
        for(int l=0;l<i;l++){
            cout<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cout<<"Enter n: "<<endl;
    cin>>n;
    nStarDiamond(n);
}