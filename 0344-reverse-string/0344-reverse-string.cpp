class Solution {
public:
    void reverseString(vector<char>& s) {
        /*
         We use two pointers : left and right initializaed to 0 and the last index of
        given nums array respectively. we run a while loop until left <= right in order to traverse the given array and we swap the elements of left and right elements for reversal.
        */
        int left = 0;
        int right = s.size() - 1;
        while(left <= right){
            swap(s[left++], s[right--]);
        }
    }
};