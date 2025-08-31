//Palindrome Number:
//problem link: https://leetcode.com/problems/palindrome-number/

#include <iostream>
#include <climits>    //for checking overflow
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        int reverse = 0;
        int original = x;  
        if(x < 0) return false;
        while(x > 0){

            int lastDigit = x % 10;

            if(reverse > INT_MAX/10 || (reverse == INT_MAX/10 && lastDigit>7)) return false;     //here, we dont check for INT_MIN as any negative signed integer is not a palindrome.
                                                                                                //check for overflow wrt INT_MAX/10 as later we do reverse*10 and it cannot go out of range!

            reverse = (reverse * 10) + lastDigit;       //reverse the number by extraction of digits concept and store it in variable declared.
            x /= 10;
        }
        if(reverse == original) return true;
        return false;
    }
};

int main(){
    int x;
    cout<<"Enter x to check if it's a palindrome: "<<endl;
    cin>>x;
    Solution obj;
    obj.isPalindrome(x);
}


//COMPLEXITY ANALYSIS:
//Time Complexity: O(log_10(N)+1) where 10 is the base.
//here, number of iterations= log10(N) since we divide N by 10 until it becomes 0. it will run for n=0 too so the +1.

//Space Complexity: O(1) as only a constant amount of additional memory for the counter regardless of size of the input number.