/*
 * @lc app=leetcode.cn id=10 lang=c
 *
 * [10] 正则表达式匹配
 */

// @lc code=start

bool isMatch(char * s, char * p){
    if(!*p)     
        return !*s;
    bool first_match = *s&&(*s ==*p ||*p =='.');
    if(*(p+1) == '*') {
        return isMatch(s,p+2) ||(first_match&&isMatch(++s,p));
    }
    else
        return first_match&&isMatch(++s,++p);
}
// @lc code=end

