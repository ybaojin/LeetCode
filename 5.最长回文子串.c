/*
 * @lc app=leetcode.cn id=5 lang=c
 *
 * [5] 最长回文子串
 */

// @lc code=start


char * longestPalindrome(char * s){
    int len =strlen(s);
    if (len<2)
        return s;
    int start=0,left,right,max=1,index = 0;
    char *str;
    while(index<len-1)
    {
        left = right = index;
        while(s[right+1] == s[index++])
        {
            if(++right==len-1)
                break;
        }
        while((left>0)&&(right<(len-1))&&(s[right+1]==s[left-1]))
        {
            right++;
            left--;
        }
        if((right-left+1)>max)
        {
           max = right-left+1;
           start = left;
        }
    }
    str = malloc(sizeof(char)*(max+1));
    printf("%d",max);
    strncpy(str,s+start,max);
    str[max] = '\0';
    return str;
}
// @lc code=end

