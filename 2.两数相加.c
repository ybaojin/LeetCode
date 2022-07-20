/*
 * @lc app=leetcode.cn id=2 lang=c
 *
 * [2] 两数相加
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){
    struct ListNode *car;
    car = l1;
    int index,ins=0;
    while(l1&&l2)
    {   
        index = (l1->val)+(l2->val)+ins;
    
        if(index>=10)
        {
            (l1->val)=index - 10 ;
            ins = 1;
        }
        else
        {
            (l1->val)=index;
            ins = 0;
        }
        if(!l1->next&&l2->next)
        {
            struct ListNode *ret = malloc(sizeof(struct ListNode));
            ret->val=0;
            ret->next = NULL;
            l1->next=ret;
        }
        if(l1->next&&!l2->next)
        {
            struct ListNode *ret = malloc(sizeof(struct ListNode));
            ret->val=0;
            ret->next = NULL;
            l2->next=ret;
        }
        if(!l1->next&&!l2->next)
            break;
        l1 = l1->next;
        l2 = l2->next;
    }
    if(ins)
    {
        struct ListNode *ret = malloc(sizeof(struct ListNode));
        ret->val=1;
        ret->next = NULL;
        l1->next=ret;        
    }
    return car;
}
// @lc code=end

