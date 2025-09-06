/* Leetcode Problem: Contains Duplicate
Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.

 

Example 1:

Input: nums = [1,2,3,1]

Output: true

Explanation:

The element 1 occurs at the indices 0 and 3.

Example 2:

Input: nums = [1,2,3,4]

Output: false

Explanation:

All elements are distinct.

Example 3:

Input: nums = [1,1,1,3,3,4,3,2,4,2]

Output: true
*/

// Solution
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int j = 0;
        int count = 0, n = nums.size();
        sort(nums.begin(),nums.end());
        for(int i = 0; i < n; i++){
            int key = nums[j];
            if (nums[i] == key){
                count++;
                if(count > 1){
                    return true;
                }
            }else{
                j = i;
                count = 1;
            }
        }
        return false;
    }
};