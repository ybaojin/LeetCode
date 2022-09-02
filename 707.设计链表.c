/*
 * @lc app=leetcode.cn id=707 lang=c
 *
 * [707] 设计链表
 */

// @lc code=start



typedef struct {
    int val;
    struct MyLinkedList *next;
} MyLinkedList;


MyLinkedList* myLinkedListCreate() {
    MyLinkedList *head = (MyLinkedList*)malloc(sizeof(MyLinkedList));
    head->next = NULL;
    return head;
}

int myLinkedListGet(MyLinkedList* obj, int index) {
    MyLinkedList *cur = obj->next;
    for (int i= 0; cur !=NULL;i++) {
        if (i == index)  {
            return cur->val;
        }
        else
            cur = cur->next;
    }
    return -1;
}

void myLinkedListAddAtHead(MyLinkedList* obj, int val) {
    MyLinkedList *head = (MyLinkedList*)malloc(sizeof(MyLinkedList));
    head->next = obj->next;
    head->val = val;
    obj->next = head;

}

void myLinkedListAddAtTail(MyLinkedList* obj, int val) {
    MyLinkedList *obj_h = obj;
    while (obj_h->next !=NULL) {
        obj_h=obj_h->next;
    }
    MyLinkedList *tail = (MyLinkedList*)malloc(sizeof(MyLinkedList));
    tail->next=NULL;
    tail->val = val;
    obj_h->next = tail;
}

void myLinkedListAddAtIndex(MyLinkedList* obj, int index, int val) {
    if (index==0) {
        myLinkedListAddAtHead(obj,val);
        return;
    }
    MyLinkedList *nobj = obj->next;
    for (int i=1; nobj!=NULL; i++) {
        if (i ==index) {
            MyLinkedList *temp = (MyLinkedList*)malloc(sizeof(MyLinkedList));
            temp->val = val;
            temp->next = nobj->next;
            nobj->next = temp;
            return;
        }
        else
            nobj= nobj->next;
    }
}

void myLinkedListDeleteAtIndex(MyLinkedList* obj, int index) {
    if (index==0) {
        MyLinkedList *temp = obj->next;
        if (temp !=NULL) {
            obj->next = temp->next;
            free(temp);
        }
        return;
    }
    MyLinkedList *nobj = obj->next;
    for (int i=1;nobj!=NULL&&nobj->next!=NULL ;i++) {
        if (i == index) {
            MyLinkedList *temp = nobj->next;
            if (temp !=NULL) {
                nobj->next = temp->next;
                free(temp);
            }
            return;
        }
        else 
            nobj = nobj->next;

    }

}

void myLinkedListFree(MyLinkedList* obj) {
   
    while (obj != NULL) {
        MyLinkedList  *temp = obj;
        obj = obj->next;
        free(temp);
    }

}

/**
 * Your MyLinkedList struct will be instantiated and called as such:
 * MyLinkedList* obj = myLinkedListCreate();
 * int param_1 = myLinkedListGet(obj, index);
 
 * myLinkedListAddAtHead(obj, val);
 
 * myLinkedListAddAtTail(obj, val);
 
 * myLinkedListAddAtIndex(obj, index, val);
 
 * myLinkedListDeleteAtIndex(obj, index);
 
 * myLinkedListFree(obj);
*/
// @lc code=end

