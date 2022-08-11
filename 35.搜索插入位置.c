/*
 * @lc app=leetcode.cn id=35 lang=c
 *
 * [35] 搜索插入位置
 */

// @lc code=start


int searchInsert(int* nums, int numsSize, int target){
    int start = 0, end = numsSize-1, mid = (start + end)/2;
    while (start <= end) {
         mid = (start + end)/2;
        if (target > nums[mid] ) {
            start = mid+1;
        }
        else if (target < nums[mid]) {
            end = mid-1;
        }
        else {
            return mid;
        }
    }
    return start;
}
// @lc code=end

