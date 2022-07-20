/*
 * @lc app=leetcode.cn id=746 lang=c
 *
 * [746] 使用最小花费爬楼梯
 */

// @lc code=start


int minCostClimbingStairs(int* cost, int costSize){
    int *dp = malloc(sizeof(int) * costSize);
    int i;
    dp[0] = cost[0];
    dp[1] = cost[1];
    for(i = 2; i<costSize;i++)
        dp[i] = (dp[i-1] > dp[i-2] ? dp[i-2] : dp[i-1]) + cost[i];

    return dp[i-1]<dp[i-2]?dp[i-1]:dp[i-2];
}
// @lc code=end

