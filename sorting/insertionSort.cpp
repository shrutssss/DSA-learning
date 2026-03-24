//Insertion Sort
//problem link: https://www.geeksforgeeks.org/problems/insertion-sort/1

//Theory: 
// We consider two parts in the array i.e Sorted and Unsorted, 'key' is selected from unsorted part and placed at the right place in the sorted array.
// 1. Outer loop for choosing key from i = 1 to array size where we consider arr[0] as part of sorted.
// 2. Assign key as arr[i] and take a variable 'j' as i - 1.
// 3. Use a while loop to go through sorted part from left to right i.e from j to 0 so we use j>=0 condition in while loop and decrement j in the loop.
//    We also check if arr[j] > key so if there are elements greater than key we shift them from j th position to j+1 th position. 
// 4. Once the while loop completes such that all elements got shifted, we place the key at the right place i.e j+1 th position as we have shifted all elements
//    to make place for key and in the end of while loop j is decremented so we place key at j+1 th position.


/*
 Complexity Analysis: 
 
    Time Complexity: O(n^2), where n is the number of elements in the array. This is because, in the worst case, we may have to compare each element with all the previous elements.

    Space Complexity: O(1), as we are sorting the array in place and not using any additional data structures that grow with input size.
*/

class Solution {
  public:
    void insertionSort(vector<int>& arr) {
        for(int i = 1; i< arr.size(); i++){
            int key = arr[i];
            int j = i - 1;
            while(j >= 0 && arr[j] > key){
                arr[j + 1] = arr[j];
                j--;
            }
            arr[j + 1] = key;
        }
    }
};

int main() {
    // Create an instance of solution class
    Solution solution;
    
    vector<int> nums = {13, 46, 24, 52, 20, 9};
    
    cout << "Before Using Insertion Sort: " << endl;
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    // Function call for insertion sort
    nums = solution.insertionSort(nums);

    cout << "After Using Insertion Sort: " << endl;
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}