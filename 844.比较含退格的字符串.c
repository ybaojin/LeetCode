/*
 * @lc app=leetcode.cn id=844 lang=c
 *
 * [844] 比较含退格的字符串
 */

// @lc code=start


bool backspaceCompare(char * s, char * t){
    int i = strlen(s)-1;
    int j = strlen(t)-1;
    int skipS = 0, skipT = 0;
    while (i>=0|| j>=0) {
        while (i>=0) {
            if (s[i] =='#') {
                skipS++;
                i--;
            } 
            else if (skipS>0) {
                skipS--,
                i--;
            } 
            else 
                break;
        }
        while (j>=0) {
            if (t[j] == '#') {
                skipT++;
                j--;
            }
            else if (skipT>0) {
                j--;
                skipT--;
            }
            else 
                break;
        }
        if (i>=0&&j>=0) {
            if (s[i] != t[j])
                return false;
        }else {
            if (i>=0 ||j>=0)
                return false;
        }
        i--;
        j--;
    }
    return true;
}
// @lc code=end

