/* Leetcode Problem: 4Sum

Given an array nums of n integers, return an array of all the unique quadruplets [nums[a], nums[b], nums[c], nums[d]] such that:

0 <= a, b, c, d < n
a, b, c, and d are distinct.
nums[a] + nums[b] + nums[c] + nums[d] == target
You may return the answer in any order.

 

Example 1:

Input: nums = [1,0,-1,0,-2,2], target = 0
Output: [[-2,-1,1,2],[-2,0,0,2],[-1,0,0,1]]
Example 2:

Input: nums = [2,2,2,2,2], target = 8
Output: [[2,2,2,2]]
*/


// Solution
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> result;
        sort(nums.begin(),nums.end());

        for(int i = 0; i < nums.size(); i++){
            if(i > 0 && nums[i] == nums[i - 1]) continue;
            
            for(int j = i + 1; j < nums.size(); j++){
                if(j > i + 1 && nums[j] == nums[j - 1]) continue;
                
                int low = j + 1, high = nums.size() - 1;
                while(low < high){
                    long long sum = (long long)nums[i] + nums[j] + nums[low] + nums[high];
                    if(sum == target){
                        result.push_back({nums[i], nums[j], nums[low], nums[high]});
                        while(low < high && nums[low] == nums[low + 1]) low++ ;
                        while(low < high && nums[high] == nums[high - 1]) high-- ;
                        low ++;
                        high --;
                    }
                    else if(sum < target) low++ ;
                    else high-- ;
                }
            }
        }
        return result;
    }
};