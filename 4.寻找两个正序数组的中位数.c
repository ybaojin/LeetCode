/*
 * @lc app=leetcode.cn id=4 lang=c
 *
 * [4] 寻找两个正序数组的中位数
 */

// @lc code=start


double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size){
    int p=0,q=0;
    int i,next = -1,pre=-1;
    int len = nums1Size+nums2Size;
    for (i=0; i<=len/2; ++i)
    {   
        pre = next;
        if (p<nums1Size&&(q>=nums2Size||nums1[p]<nums2[q])){
            next = nums1[p];
            p++;
        }
        else{
            next = nums2[q];
            q++;
        }
    }
    return (len%2==0 ? (pre+next)/2.0 : next);
}
// @lc code=end

