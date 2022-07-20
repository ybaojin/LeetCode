/*
 * @lc app=leetcode.cn id=14 lang=c
 *
 * [14] 最长公共前缀
 */

// @lc code=start


char * longestCommonPrefix(char ** strs, int strsSize){
    int i, j;
    if(strs[0][0]=='\0'||strsSize==1)
        return strs[0];
    for(j=0;;j++)
    {
        for(i = 0;i<strsSize-1;i++)
        {   
            if(strs[i][j]!='\0'&&strs[i+1][j]!='\0' && strs[i][j]==strs[i+1][j])
                continue;
            else
            {
                strs[0][j] = '\0';
                return strs[0];
            }
        }
    }  
}
// @lc code=end

