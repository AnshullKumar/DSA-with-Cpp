/*  
Leetcode Problem: Valid Anagram


Given two strings s and t, return true if t is an anagram of s, and false otherwise.

Example 1:

Input: s = "anagram", t = "nagaram"

Output: true

Example 2:

Input: s = "rat", t = "car"

Output: false
*/

// Solution
#include<string>
#include<algorithm>
using namespace std;
class Solution {
public:
    
    bool isAnagram(string s, string t) {
        int count = 0;
        int n = s.size();
        if(s.size() != t.size()){
            return false;
        }
        sort(s.begin() , s.end());
        sort(t.begin() , t.end());
        for(int i = 0; i < n; i++){
            if(s[i] == t[i]){
                count++;
                if(count == n){
                    return true;
                }
            } else{
                return false;
            }
        } return {};
    }
}; 