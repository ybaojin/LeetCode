/*
 * @lc app=leetcode.cn id=21 lang=c
 *
 * [21] 合并两个有序链表
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2){
    struct ListNode *ret,*tmp;
    ret = malloc(sizeof (struct ListNode));
    tmp = ret;
    while(list1 &&list2)
    {
        if(list1->val < list2->val)
        {
            tmp->next = list1;
            tmp = list1;
            list1 = list1->next;

        }
        else
        {
            tmp->next = list2;
            tmp = list2;
            list2 = list2->next;

        }
    }
    tmp->next = list1?list1:list2;
    return ret->next;
}
// @lc code=end

