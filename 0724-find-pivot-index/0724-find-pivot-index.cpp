class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        unordered_map<int, int> sums;
        int curr_sum = 0;
        for(int i = 0; i < nums.size(); i++){
            curr_sum += nums[i];
            sums[i] = curr_sum;
        }
        int pivotIndex = -1;
        int leftSum = -1;
        int rightSum = -1;
        for(auto i : sums){
            if(i.first == 0){
                leftSum = 0;
            }
            else{
                leftSum = sums[i.first - 1];
            }
            rightSum = sums[(nums.size() - 1)] - sums[i.first];
            if(leftSum == rightSum){
                pivotIndex = i.first;
            };
        }
        return pivotIndex;
    }
};