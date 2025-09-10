/* Leetcode Problem: Palindrome Number

Given an integer x, return true if x is a palindrome, and false otherwise.

 

Example 1:

Input: x = 121
Output: true
Explanation: 121 reads as 121 from left to right and from right to left.
Example 2:

Input: x = -121
Output: false
Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.
Example 3:

Input: x = 10
Output: false
Explanation: Reads 01 from right to left. Therefore it is not a palindrome.
*/

// Solution
#include<vector>
using namespace std;
class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) return false;
        vector<int> digits;
        int temp = x;
        while (temp > 0){
            digits.push_back(temp % 10);
            temp /= 10;
        }
        int i = 0, j = digits.size() - 1;
        while (i < j) {
            if (digits[i] != digits[j]) return false;
            i++;
            j--;
        }return true;
    }
};