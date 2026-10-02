class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        /*
            1. Sort the array of strings lexicographically in order to get 2 most differing strings on either ends of the array i.e first and last element. since lexicographic sorting of array of strings takes place first based on each char present in the string compared as per alphabetical order and if overlap exists, sorting occurs as per length. 
            2. Compare the first and last element by iterating through both as the number of times as the first string's length since sorting is done, no need to traverse the whole last string, initialize a string variable to keep track of common characters present in first and last string during comparision.
        */
        string prefix = "";
        sort(strs.begin(), strs.end());
        string first = strs[0], last = strs[strs.size() - 1];
        for(int i = 0; i < first.size(); i++){
            if(first[i] != last[i]){
                return prefix;
            }
            prefix += first[i];
        }
        return prefix;
    }
};