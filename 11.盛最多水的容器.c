/*
 * @lc app=leetcode.cn id=11 lang=c
 *
 * [11] 盛最多水的容器
 */

// @lc code=start


int maxArea(int* height, int heightSize){
    int left=0, right=heightSize-1;
    long long int resoult = 0 , max = 0;
    while (left < right) {
        if (height[left] > height[right]) {
            max = height[right] * (right - left);
            right--;
        }
        else {
            max  =  height[left] * (right - left) ;
            left++;
        }
        resoult  =   max > resoult ? max : resoult;
    }
    return resoult;

}
// @lc code=end

