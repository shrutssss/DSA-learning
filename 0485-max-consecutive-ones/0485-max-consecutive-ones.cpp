class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxOnes = 0;
        int currOnes = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == 1){
                currOnes += 1;
                maxOnes = max(maxOnes, currOnes);
            }
            else{
                currOnes = 0;
            }
        }
        return maxOnes;
    }
};