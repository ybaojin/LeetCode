/*
 * @lc app=leetcode.cn id=209 lang=c
 *
 * [209] 长度最小的子数组
 */

// @lc code=start


int minSubArrayLen(int target, int* nums, int numsSize){  
    int sum =0;
    int minlen = INT_MAX;
    int len =0;
    int left =0,right =0;
    for (;right<numsSize;++right) {
        sum += nums[right];
        while(sum>=target){
            len =right-left +1;
            minlen = minlen<len ? minlen: len;
            sum-=nums[left++];
        }
    }
    return minlen ==INT_MAX?0:minlen;
}
// @lc code=end

