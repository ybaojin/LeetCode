/*
 * @lc app=leetcode.cn id=7 lang=c
 *
 * [7] 整数反转
 */

// @lc code=start


int reverse(int x){
    int flag=0;
    long long int ret=0,rep;
    rep = x;
    if(rep==0)
        return 0;
    
    if(fabs(rep)!=rep)
    {
        rep = -rep;
        flag =1;
    }
    while(rep)
    {
        ret = ret*10 + rep%10;
        if(ret>INT_MAX)
            return 0;
        rep/=10;
    }
    return flag? -ret : ret;

}
// @lc code=end

