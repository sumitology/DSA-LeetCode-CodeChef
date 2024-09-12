/*Given an array nums of size , return the majority element.

The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

Example 1:

Input: nums = [3,2,3]
Output: 3

Example 2:

Input: nums = [2,2,1,1,1,2,2]
Output: 2

Constraints:

n == nums.length
1 <= n <= 5 * 1e4
-1e9 <= nums[i] <= 1e9

Follow-up: Could you solve the problem in linear time and in O(1) space --*/

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candidate=0;   //have used an called Boyer-Moore Voting Algorithm
        int count=0;
        for(int num:nums){            
            if(count==0){
                candidate=num;
            }
            count+=(num==candidate)? 1:-1;
        }
        return candidate;
        
    }
};