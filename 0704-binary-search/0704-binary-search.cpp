class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size();
        int mid;
        while(left < right){
            mid = left + (right - left)/2;
            if(nums[mid] > target){
                right--;
            }
            else if(nums[mid] < target){
                left++;
            }
            else{
                return mid;
            }
        }
        return -1;
    }
};