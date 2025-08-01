//Functions: Pass by Reference and value.
//Problem link: https://www.geeksforgeeks.org/problems/pass-by-reference-and-value/1

/*
pass by value:
a copy of the variable is passed to the function.
changes made to the parameter do not affect the original variable.

pass by reference:
a reference (alias) to the original variable is passed.
changes made to the parameter directly affect the original variable.
*/


#include <iostream>
#include <vector>
using namespace std;

class Solution {
  public:
    vector<int> passedBy(int a, int &b) {
        a += 1;    // only local 'a' is changed
        b += 2;    // original 'b' is modified
        return {a, b};
    }
};

int main() {
    int a, b;
    cin >> a >> b;

    Solution obj;
    vector<int> result = obj.passedBy(a, b);

    cout << result[0] << " " << result[1] << endl;
    cout << a << " " << b << endl;

    return 0;
}
