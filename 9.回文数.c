/*
 * @lc app=leetcode.cn id=9 lang=c
 *
 * [9] 回文数
 */

// @lc code=start

bool isPalindrome(long int x){
    long long int n,m=0;
    n=x;
    if(x==0)
        return true;
    if(x<0||x>INT_MAX)
        return false;
    
    while(x!=0)
    {
        m=10*m + x%10;
        x=x/10;
    }  
    return m==n;     
}

// @lc code=end

