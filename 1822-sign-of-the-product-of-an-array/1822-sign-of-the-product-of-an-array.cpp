class Solution {
public:
    int arraySign(vector<int>& nums) {
        unordered_map<int, int> freq;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == 0) return 0;
            else if(nums[i] < 0){
                freq[-1] += 1;
            }
        }
        if(freq[-1] % 2 == 0){
            return 1;
        }
        return -1;
    }
};