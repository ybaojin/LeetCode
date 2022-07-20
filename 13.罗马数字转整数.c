/*
 * @lc app=leetcode.cn id=13 lang=c
 *
 * [13] 罗马数字转整数
 */

// @lc code=start


int romanToInt(char* s) {
    int i = 0;
    int n = 0;
    while (strlen(s) > 0&& s!="")
    {
        if (*s == 'I')
        {
            s++;
            if (*s == 'V')
            {
                n += 4;
                s += 1;
            }
            else if (*s == 'X')
            {
                n += 9;
                s += 1;
            }
            else
            {
                n += 1;
              
            }
        }
        else if (*s == 'V')
        {
            n += 5;
            s++;
        }
        else if (*s == 'X')
        {
            s++;
            if (*s  == 'L')
            {
               n += 40;
               s++;
            }
            else if (*s  == 'C')
            {
               n += 90;
               s++;
            }
            else
               n += 10;
        }
        else if (*s == 'L')
        {
            n += 50;
            s++;
        }
        else if (*s == 'C')
        {
            s++;
            if (*s  == 'D')
            {
                n += 400;
                s++;
            }
            else if (*s  == 'M')
            {
                n += 900;
                s++;
            }
            else
            {
                n += 100;
            }
        }
        else if (*s == 'D')
        {
            n += 500;
            s++;
        }
        else if (*s == 'M')
        {
            n += 1000;
            s++;
        }
    }
    return n;
}
// @lc code=end

