class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int n1 = nums1.size();
        int n2 = nums2.size();
        for(int i = 0; i < n2; i++){
            nums1[n1 - i - 1] = nums2[i];
        }
        int left = 0;
        int last = n1 - 1;
        sort(nums1.begin(), nums1.end());
    }
};