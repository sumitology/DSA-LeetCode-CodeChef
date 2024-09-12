3.Given an integer array nums sorted in non-decreasing order, return an array of the squares of each number sorted in non-decreasing order.

Example 1:

Input: nums = [-4,-1,0,3,10]
Output: [0,1,9,16,100]
Explanation: After squaring, the array becomes [16,1,0,9,100].

After sorting, it becomes [0,1,9,16,100].

Example 2:

Input: nums = [-7,-3,2,3,11]
Output: [4,9,9,49,121]

Constraints:

1 <= nums.length <= 1e4
-1e4 <= nums[i] <= 1e4
nums is sorted in non-decreasing order.

Follow up: Squaring each element and sorting the new array is very trivial, could you find an O(n) solution using a different approach?

## Code

#include <bits/stdc++.h>
using namespace std;

vector<int> sortedSquares(vector<int>& nums) {
    int n = nums.size();
    vector<int> result(n);  // Result array to store the sorted squares
    int left = 0;
    int right = n - 1;
    int pos = n - 1;  // Position to fill in the result array from the end

    // Process the array from both ends
    while (left <= right) {
        int leftSquare = nums[left] * nums[left];
        int rightSquare = nums[right] * nums[right];

        if (leftSquare > rightSquare) {
            result[pos--] = leftSquare;
            left++;
        } else {
            result[pos--] = rightSquare;
            right--;
        }
    }

    return result;
}

int main() {
    vector<int> nums = {-4, -1, 0, 3, 10};  // Example input
    vector<int> result = sortedSquares(nums);

    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
