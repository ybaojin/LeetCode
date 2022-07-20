/*
 * @lc app=leetcode.cn id=6 lang=c
 *
 * [6] Z 字形变换
 */

// @lc code=start


char * convert(char * s, int numRows){
    int n = strlen(s),r = numRows;
    if(r==1||r>=n)
        return s;
    int t = r*2-2;
    char *ans = (char*)malloc(sizeof(char)*(n+2));
    int pos=0;
    for(int i=0;i<r;++i)
    {
        for(int j=0;j+i<n;j+=t)
        {
            ans[pos++] = s[j+i];
            if(0<i&&i<r-1&&j+t-i<n)
            {
                ans[pos++]= s[j+t-i];
            }
        }
    }
    ans[pos]='\0';
    return ans;
}
// @lc code=end

