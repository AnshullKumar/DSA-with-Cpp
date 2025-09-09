/* Leetcode Problem: Valid Parenthesis
Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:

Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.
Every close bracket has a corresponding open bracket of the same type.
 

Example 1:

Input: s = "()"

Output: true

Example 2:

Input: s = "()[]{}"

Output: true

Example 3:

Input: s = "(]"

Output: false

Example 4:

Input: s = "([])"

Output: true

Example 5:

Input: s = "([)]"

Output: false
*/

// Solution
#include<string>
using namespace std;
class Solution {
public:
    bool isValid(string s) {
        int top = -1;
        char* stack = (char*)malloc(s.size() * sizeof(char));
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '(' || s[i] == '[' || s[i] == '{'){
                stack[++top] = s[i];
            } else{
                if(top == -1){
                    return false;
                }
                if(s[i] == ')' && stack[top] == '(' ||
                s[i] == ']' && stack[top] == '[' ||
                s[i] == '}' && stack[top] == '{'){
                top--;
            }else{
                return false;
            }  
        }
        }
        return top == -1;
    }
};