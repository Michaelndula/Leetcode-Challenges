#include 'stdio.h'

/*
    Given an array of integers nums which is sorted in ascending order, and an integer target, 
    write a function to search target in nums. If target exists, then return its index. Otherwise, return -1.

    You must write an algorithm with O(log n) runtime complexity.
*/

int search(int* nums, int numsSize, int target){

     for(int i = 0; i < numsSize; i++){
        if(target == nums[i]){
            return i;
        }
    }
    return -1;
}

/*
    Example 1:

        Input: nums = [-1,0,3,5,9,12], target = 9
        Output: 4
        Explanation: 9 exists in nums and its index is 4
*/