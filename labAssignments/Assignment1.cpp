// Assignment 1: For a given number of integers, select a data structure to rearrange it such that every second element becomes
// greater than its left and right elements. Assume no duplicate elements are present in the list of integers

#include <iostream>
using namespace std;

void rearrange(int arr[],int size){
    int temp=0;
    for(int i=1;i<size;i+=2){
        if(arr[i]<arr[i-1]){
            temp=arr[i];
            arr[i]=arr[i-1];
            arr[i-1]=temp;
            if(arr[i]<arr[i+1]){
            temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
            }
        }
        else if(arr[i]<arr[i+1]){
            temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
            if(arr[i]<arr[i-1]){
            temp=arr[i];
            arr[i]=arr[i-1];
            arr[i-1]=temp;
        }
    }
}
}

int main(){
    
    int n;
    cout<<"Enter number of elements to rearrange: "<<endl;
    cin>>n;
    
    int arr[n];
    
    cout<<"Storing elements in ARRAY data structure."<<endl;
    for(int i=0;i<n;i++){
        cout<<"Enter element "<<i<<" : ";
        cin>>arr[i];
        cout<<endl;
    }
    
    cout<<"Displaying original array: "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    rearrange(arr,n);
    
    cout<<"Displaying rearranged array: "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}