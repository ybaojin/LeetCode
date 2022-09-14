/*
 * @lc app=leetcode.cn id=206 lang=c
 *
 * [206] 反转链表
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* reverse(struct ListNode *pre, struct ListNode *cur) {
    if(!cur)
        return pre;
    struct ListNode *temp = cur->next;
    cur->next = pre;
    return reverse(cur,temp); 
}

struct ListNode* reverseList(struct ListNode* head){
    return reverse(NULL,head);
}
// @lc code=end

