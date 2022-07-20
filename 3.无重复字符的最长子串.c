/*
 * @lc app=leetcode.cn id=3 lang=c
 *
 * [3] 无重复字符的最长子串
 */

// @lc code=start


int lengthOfLongestSubstring(char * s){
    int right=0,left=0,max=0;
    int hash[127];
    while(right<strlen(s))
    {
        if(hash[s[right]])
        {
            if(left<hash[s[right]])
                left = hash[s[right]];
            hash[s[right]] = right+1;
        }
        else
        {
            hash[s[right]]=right+1;
        }
        max = (right-left+1)>max?(right-left+1):max;
        right++;
    }
    return max;
}
// @lc code=end

