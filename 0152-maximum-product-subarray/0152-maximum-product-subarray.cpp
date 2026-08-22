class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxi = INT_MIN;
        int n = nums.size();
        int prefixProduct = 1;
        int suffixProduct = 1;
        int maximumProduct = INT_MIN;
        for(int i = 0; i < n; i++){
            if(prefixProduct == 0) prefixProduct = 1;
            if(suffixProduct == 0) suffixProduct = 1;
            prefixProduct *= nums[i];
            suffixProduct *= nums[n - 1 - i];
            maximumProduct = max(maximumProduct, max(prefixProduct, suffixProduct));
        }
        return maximumProduct;
    }
};