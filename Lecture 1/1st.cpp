/*                              Question 1:
Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

Note: that you must do this in-place without making a copy of the array.

Example 1:

Input: nums = [0,1,0,3,12]
Output: [1,3,12,0,0]

Example 2:

Input: nums = [0]
Output: [0]

Constraints:

1 <= nums.length <= 1e4
-2e31 <= nums[i] <= 2e31 - 1    */

#include<bits/stdc++.h>
using namespace std;

    void moveZeroes(vector<int>& nums) {
        int index=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                nums[index++]=nums[i];
            }
        }
        for(int i=index;i<nums.size();i++){
            nums[i]=0;
        }
    }

int main(){
   vector<int> nums={ 0,1,0,3,12 };
   moveZeroes(nums);

   for( int i=0;i<nums.size();i++){
      cout<<nums[i]<<" ";
   }
   cout<<endl;
   return 0;
}