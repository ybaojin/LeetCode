/*
 * @lc app=leetcode.cn id=20 lang=c
 *
 * [20] 有效的括号
 */

// @lc code=start


bool isValid(char * s){
    int len = strlen(s);
    char Stack[len];
    int top=0;
    for(int i = 0;i<len;i++)
    {
        if(s[i]=='('||s[i]=='<'||s[i]=='['||s[i]=='{')
            Stack[top++]=s[i];
        else
        {
            if(top == 0)
                return false;
            else
            {
                char todle;
                todle = Stack[--top];
                if(s[i]==')'&&todle!='(')
                    return false;
                if(s[i]=='>'&& todle!='<')
                    return false;
                if(s[i] ==']'&&todle!='[')
                    return false;
                if(s[i] =='}'&&todle!='{')
                    return false;
            }
        }
    }

    return  top==0?true:false;
}
// @lc code=end

