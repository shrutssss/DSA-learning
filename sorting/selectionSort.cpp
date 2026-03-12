//Selection sort
//problem link: https://www.geeksforgeeks.org/problems/selection-sort/1

//Theory: https://takeuforward.org/sorting/selection-sort-algorithm
//In selection sort, we put the smallest element at the start by comparing the first element with every other element in the array and swap if there is a smaller one than it and so on.
//1. We create an outer loop i from 0 to array size, this outer loop is to define range of sorted elements, first we only fix first element as the minimum and so on.
//2. We create a variable 'min' which stores index of the minimum element, first it is assigned at index=0. After every iteration of outer loop, min is updated to the value of i.
//3. After this, we create an inner loop j from i+1 to array size - 1, which compares every element after the ith element with the element at min index, if arr[j]<arr[min] then min is updated with the value of j i.e the min will become the jth element as it is smaller.
//4. Outside the inner loop and inside the outer loop, we swap arr[i] and arr[min]. Therefore, we replace ith element which goes from 0 to array size - 1, with minimum element found from the array with the help of the inner loop.

//Complexity analysis: 
//Time Complexity: O(N^2),Selection sort runs in O(N²) time in the best, average, and worst cases due to its nested loop structure. It makes approximately N(N-1)/2 comparisons, regardless of the array's initial state. Even if no swaps are needed (best case), the number of comparisons remains the same.
//Space Complexity: O(1). No extra space used.

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    // Function to perform selection sort on the given array.
    void selectionSort(vector<int> &arr) {
        for(int i=0;i<arr.size();i++){
            int min = i;
            for(int j=i+1;j<arr.size();j++){
                if(arr[j]<arr[min]){
                    min = j;
                }
            }
            int temp = arr[min];
            arr[min] = arr[i];
            arr[i] = temp;
        }
    }
};

int main() {
    // Initialize array
    int arr[] = {13, 46, 24, 52, 20, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Print array before sorting
    cout << "Before selection sort: " << "\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";

    // Call selection sort
    selection_sort(arr, n);

    return 0;
}
