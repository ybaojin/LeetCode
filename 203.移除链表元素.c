/*
 * @lc app=leetcode.cn id=203 lang=c
 *
 * [203] 移除链表元素
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* removeElements(struct ListNode* head, int val){
    struct ListNode *temp;
    while(head && head->val == val) {
        temp = head;
        head = head->next;
        free(temp);
    }
    struct ListNode *cur = head;
    while (cur&& (temp= cur->next)) {
        if (temp->val == val) {
            cur->next = temp->next;
            free(temp);
        }
        else{
            cur = cur->next;
        }
    }
    return head;
}
// @lc code=end

