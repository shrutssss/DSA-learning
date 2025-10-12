// Armstrong Numbers
// problem link: https://www.geeksforgeeks.org/problems/armstrong-numbers2727/1

// notes:
// armstrong number: if the sum of cubes of the digits of a number is equal to the number itself.
// algorithm: 
//    1. store given number in a variable so that it can be used for comparision later.
//    2. create variable 'sum' to store sum of digits.
//    3. Extract digits of number one by one by using % operator in a while loop 
//       which will run while n>0 (n value will be updated in end of while loop)
//    4. update sum every time while loop runs to store sum of cube of each digit extracted
//    5. compare original number with sum and return true/false based on it.

// Time Complexity: O(log_10 (n) + 1)
// since we are dividing n by 10 while n>0, it will take place log_10 (n) times 
// for eg. if n is 1000 then division will occur 3 times
// mathematically, to determine how many times division will occur we use log to the base by which we are dividing the number.
// so log_10(1000) = log_10(10^3) = 3 -> 3 times the number will be divided
// now once n=0, the while loop will run one more time so +1.



class Solution {
  public:
    bool armstrongNumber(int n) {
        
        int originalNumber = n;
        
        int sum = 0;
        
        while(n > 0){
            
            int digit = n % 10;
            
            sum += (digit*digit*digit);
            
            n = n / 10;
        }
        
        if(sum == originalNumber) return true;
        
        else return false;
    }
};