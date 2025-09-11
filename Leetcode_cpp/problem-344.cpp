/* Leetcode Problem: Reverse String

Write a function that reverses a string. The input string is given as an array of characters s.

You must do this by modifying the input array in-place with O(1) extra memory.

 

Example 1:

Input: s = ["h","e","l","l","o"]
Output: ["o","l","l","e","h"]
Example 2:

Input: s = ["H","a","n","n","a","h"]
Output: ["h","a","n","n","a","H"]
*/

// Solution
#include<vector>
using namespace std;
#include<string>
class Solution {
public:
    void reverseString(vector<char>& s) {
        char* stack = (char*)malloc(s.size() * sizeof(char));
        int top = -1;
        for(int i = 0; i < s.size(); i++){
            stack[++top] = s[i];
        }
        for (int i = 0; i < s.size(); i++) {
            s[i] = stack[top--];
        }
    }
};