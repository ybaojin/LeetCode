/*
 * @lc app=leetcode.cn id=12 lang=c
 *
 * [12] 整数转罗马数字
 */

// @lc code=start
const int values[] ={1000,900,500,400,100,90,50,40,10,9,5,4,1};
const char* symbols[] = {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
    

char * intToRoman(int num){

    char *str = malloc(sizeof(char)*20);
    int i;
    str[0] = '\0';
    
    for (i = 0; i<13; i++) {
        while (num >= values[i]) {
            strcpy(str + strlen(str), symbols[i]);
            num -= values[i];
        }
        if (num == 0)
            return str;
    }
    return str;
}
// @lc code=end

