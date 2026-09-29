class Solution {
public:

    int string_to_integer(string s){
        int n = 0;
        for(char c : s){
            if(c >= '0' && c <= '9'){
                n = n * 10 + (c - '0');
            }
        }
        return n;
    }

    string largestOddNumber(string num) {
        int number = string_to_integer(num);
        int largest = 0;
        while(number > 0){
            if(number % 2 != 0){
                largest = max(largest, number);
            }
            number /= 10;
        }
        if(largest <= 0) return "";
        return to_string(largest);
    }
};