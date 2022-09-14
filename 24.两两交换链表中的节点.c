/*
 * @lc app=leetcode.cn id=24 lang=c
 *
 * [24] 两两交换链表中的节点
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* swapPairs(struct ListNode* head){
    if (!head || !head->next)
        return head;
    struct ListNode *temp = head->next;
    head->next = swapPairs(temp->next);
    temp->next = head;
    return temp;
}
// @lc code=end

