/* Leetcode Problem: Reverse Interger

Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.

Assume the environment does not allow you to store 64-bit integers (signed or unsigned).

 

Example 1:

Input: x = 123
Output: 321
Example 2:

Input: x = -123
Output: -321
Example 3:

Input: x = 120
Output: 21
*/


// Solution
#include<climits>
class Solution {
public:
    int reverse(int x) {
        long int rev = 0;
        while(x > 0 || x < 0){
            long long temp = x % 10;
            rev = (rev * 10) + temp;
            x /= 10;
        }
        if(rev > INT_MAX || rev < INT_MIN){
            return 0;
        }
        return rev;
        
    }
};