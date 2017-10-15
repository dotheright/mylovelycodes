/*
Given an array of integers, return indices 指数,下标 of the two numbers such that they add up to a specific target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

Example:

Given nums = [2, 7, 11, 15], target = 9,

Because nums[0] + nums[1] = 2 + 7 = 9,
return [0, 1].


*/
class Solution {
    public int[] twoSum(int[] nums, int target) {
        int len=nums.length;
        int [] retArr = new int[2];
        //Arrays.fill(retArr,0);
        
        for(int i =0 ; i < len ; i++){
            for(int j = 0 ; j < len ; j++){
                if( (j!=i) && (nums[i]+ nums[j] ==target ) ){                    
                    retArr[0] = i;
                    retArr[1] = j;
                    return retArr;
                }                
            }            
        }
        
        return retArr;
    }
}
