/*
Assignment: You are given a sorted list of integers. Write a program to implement a binary search algorithm to find a target
integer in the list. Evaluate the time & space complexity of the searching techniques. Input: The input will consist of
an integer n, the number of elements in the list (1 ≤ n ) where integers will be separated by n space, representing the
list of integers. Output: Print the index of the target integer in the list. If the target integer is not present in the list,
print -1

/*
Binary Search Function (Recursive)
arr[] = sorted array
left = starting index
right = ending index
x = element to search
*/

#include <iostream>
using namespace std;

int binarySearch(int arr[],int left, int right,int x){
    if(left > right) return -1;
    int mid;
    mid = left + (right - left)/2;
    if(arr[mid] == x){
        return mid;
    }
    else if(arr[mid] > x){
        return binarySearch(arr, left, mid - 1, x);
    }
    else{
        return binarySearch(arr, mid + 1, right, x);
    }
}

int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter sorted array: "<<endl;
    for(int i = 0; i < n; i++){
        cout<<"Enter arr["<<i<<"]: "<<endl;
        cin>>arr[i];
    }
    int x;
    cout<<"Enter integer to search: ";
    cin>>x;
    int result = binarySearch(arr, 0, n-1, x);
    if(result != -1){
        cout<<"Element found at index: "<<result;
    }else{
        cout<<"Element not found";
    }
}