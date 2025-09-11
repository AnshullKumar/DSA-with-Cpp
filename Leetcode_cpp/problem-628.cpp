/* Leetcode Problem: Maximum Product of Three Numbers

Given an integer array nums, find three numbers whose product is maximum and return the maximum product.

 

Example 1:

Input: nums = [1,2,3]
Output: 6
Example 2:

Input: nums = [1,2,3,4]
Output: 24
Example 3:

Input: nums = [-1,-2,-3]
Output: -6
*/

// Solution
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int result1 = nums[n-1] * nums[n-2] * nums[n-3]; 
        int result2 = nums[0] * nums[1] * nums[n-1];     
        return max(result1, result2);
    }
};