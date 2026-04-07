// Largest Element
// problem link: https://www.geeksforgeeks.org/problems/largest-element-in-array4009/0

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int largest(vector<int> &arr) {
        // Assume first element is the largest
        int largest = arr[0];

        // Traverse the array
        for(int i = 0; i < arr.size(); i++){
            // If current element is greater, update largest
            if(arr[i] > largest){
                largest = arr[i];
            }
        }

        // Return the largest element
        return largest;
    }
};

int main(){
    int n;

    // Input size of array
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);

    // Input elements
    cout << "Enter elements: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    // Create object of Solution class
    Solution obj;

    // Call function and print result
    int result = obj.largest(arr);
    cout << "Largest element is: " << result << endl;

    return 0;
}