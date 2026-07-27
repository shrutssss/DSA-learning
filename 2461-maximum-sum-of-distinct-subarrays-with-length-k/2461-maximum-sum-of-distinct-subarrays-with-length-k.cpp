class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        long long maxSum = 0;
        long long currSum = 0;
        int l = 0, r = 0;
        unordered_map<int, int> count;
        for(int r = 0; r < nums.size(); r++){
            currSum += nums[r];
            count[nums[r]] += 1;
            if((r - l + 1) > k){
                count[nums[l]] -= 1;
                if(count[nums[l]] == 0){
                    count.erase(nums[l]);
                }
                currSum -= nums[l];
                l++;
            }
            if((r - l + 1) == k && count.size() == k){
                maxSum = max(maxSum, currSum);
            }
        }
        return maxSum;
    }
};