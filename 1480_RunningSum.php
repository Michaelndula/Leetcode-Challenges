<?php 
/**
 * Given an array nums. We define a running sum of an array as runningSum[i] = sum(nums[0]…nums[i]).
 *Return the running sum of nums.
 *
 * Constraints:
 *1 <= nums.length <= 1000
 *-10^6 <= nums[i] <= 10^6
 * 
 */

    class Solution{
        /**
         * @param Integer[] $nums
         * @return Integer[]
         */
         function runningSum($nums) {
            $arr = [];
            foreach($nums as $num) { 
                $sum += $num; 
                array_push($arr, $sum);
            } 
            return $arr;
        }
    }
    $total = new Solution();
    $total->runningSum(1,2,3,4);
    var_dump($total);
    
    

    /*
     Example 1:
        Input: nums = [1,2,3,4]
        Output: [1,3,6,10]
        Explanation: Running sum is obtained as follows: [1, 1+2, 1+2+3, 1+2+3+4].
     */
?>