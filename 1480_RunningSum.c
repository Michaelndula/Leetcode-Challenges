#include "stdio.h";
/**
 * Note: The returned array must be malloced, assume caller calls free().
 * Given an array nums. We define a running sum of an array as runningSum[i] = sum(nums[0]…nums[i]).
 * Return the running sum of nums.
 */
int* runningSum(int* nums, int numsSize, int* returnSize){
    int sum = 0;
    *returnSize = numsSize;

    for (int i = 0; i < numsSize; i++) {
       sum=sum + nums[i];
       nums[i]=sum;
    }
    return nums;
}

/*
Example 1:
Input: nums = [1,2,3,4]
Output: [1,3,6,10]
Explanation: Running sum is obtained as follows: [1, 1+2, 1+2+3, 1+2+3+4].
*/