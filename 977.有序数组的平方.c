/*
 * @lc app=leetcode.cn id=977 lang=c
 *
 * [977] 有序数组的平方
 */

// @lc code=start


/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortedSquares(int* nums, int numsSize, int* returnSize){
    int * res = (int *)malloc(sizeof(int)*numsSize);
    int i =0, j=numsSize-1,k=numsSize-1;
    while (i<=j) {   
        int sum1 = nums[i]*nums[i];
        int sum2 = nums[j]*nums[j];
        if(sum1 < sum2) {
            res[k--] = sum2;
            j--;
        }
        else {
            res[k--] = sum1;
            i++;
        }        
    }
    * returnSize = numsSize;
    return res;
}
// @lc code=end

