/*
 * @lc app=leetcode.cn id=8 lang=c
 *
 * [8] 字符串转换整数 (atoi)
 */

// @lc code=start


int myAtoi(char * s){
    int len = strlen(s);
    int flag=1;
    double num = 0;
    if(!len)
        return 0;
    while(*s ==' ')
    {    
        s++;
    }
    if(*s =='-')
    {
        flag=-1;
         s++;
    }
    else if(*s =='+')
    {
        flag=1;
         s++;
     }
    while(*s!='\0'&&*s>='0'&&*s<='9')
    {
        
        num = num*10 + *s - '0';
        if(num*flag>=INT_MAX)
            return INT_MAX;
        if(num*flag<=INT_MIN)
            return INT_MIN;

        s++;
    }

    return (int)num*flag;
}
// @lc code=end

