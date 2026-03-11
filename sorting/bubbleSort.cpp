//Bubble sort
//problem link: https://www.geeksforgeeks.org/problems/bubble-sort/1

//Theory: https://www.geeksforgeeks.org/dsa/bubble-sort-algorithm/

//1. We create an outer loop 'i' from array size - 1 to 0. This is basically for not messing with the last element i.e largest which is sorted after each iteration.
//2. Then we create an inner loop 'j' from 0 to i-1 as we first need to compare adjacent elements and swap them if arr[j]>arr[j+1]. We took i-1 because we want to compare elements which are unsorted only and since i determines the range of unsorted array we take i and we do i-1 as we compare arr[j] and arr[j+1] so j+1 cannot execed array size else we would get garbage value or 0. 
//3. If arr[j] > arr[j+1], we swap them.
//4. OPTIMAL APPROACH: The best case occurs if the given array is already sorted. We can reduce the time complexity to O(N) by just adding a small check inside the loops.
//We will check in the first iteration if any swap is taking place. If the array is already sorted no swap will occur and we will break out from the loops.
//Thus the iteration of the outer loop will be just 1. And our overall time complexity will be O(N).

//Complexity Analysis: 
// Time Complexity:O(N^2) for the worst and average cases and O(N) for the best case. Here, N = size of the array.
// Space Complexity:O(1)

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    void bubbleSort(vector<int>& arr) {
        for(int i=arr.size()-1;i>=0;i--){
            int didSwap = 0;
            for(int j=0;j<=i-1;j++){
                if(arr[j]>arr[j+1]){
                    int temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                    didSwap = 1;
                }
            }
            if(didSwap == 0) break;
        }
    }
};

int main() {
    vector<int> arr = {13, 46, 24, 52, 20, 9};

    cout << "Before Using Bubble Sort:\n";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    BubbleSort sorter;
    sorter.bubble_sort(arr);

    return 0;
}