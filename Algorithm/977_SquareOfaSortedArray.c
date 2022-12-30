#include <stdlib.h>
/**
 * Note: The returned array must be malloced, assume caller calls free().
 * Given an integer array nums sorted in non-decreasing order, 
 * return an array of the squares of each number sorted in non-decreasing order.
 */

int* sortedSquares(int* nums, int numsSize, int* returnSize){
    int *arrPtr = malloc(sizeof(nums[0])*numsSize);
    *returnSize = numsSize;
    int end = numsSize - 1, start = 0;

    for(int i = numsSize - 1; start <= end; i--){
        int a = nums[start] * nums[start];
        int b = nums[end] * nums[end];
        if(a > b){
            arrPtr[i] = a;
            start++;
        }else{
            arrPtr[i] = b;
            end--;
        }
    }
    return arrPtr;
}

/*
    Example 1:
        Input: nums = [-4,-1,0,3,10]
        Output: [0,1,9,16,100]
        Explanation: After squaring, the array becomes [16,1,0,9,100].
        After sorting, it becomes [0,1,9,16,100].
    
    Example 2:
        Input: nums = [-7,-3,2,3,11]
        Output: [4,9,9,49,121]
*/