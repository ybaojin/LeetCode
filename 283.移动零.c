/*
 * @lc app=leetcode.cn id=283 lang=c
 *
 * [283] 移动零
 */

// @lc code=start


void moveZeroes(int* nums, int numsSize){
    int flag = 0;
    for (int i=0; i<numsSize; i++) {
        if (nums[i] != 0)
            nums[flag++] =nums[i]; 
    }
    for (;flag<numsSize;flag++) {
        nums[flag] = 0;
    }
    return nums;
}
// @lc code=end

