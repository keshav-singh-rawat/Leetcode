/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode* newhead = head;
    struct ListNode* curr = head;
    struct ListNode* prev = NULL;
    while (head != NULL)
    {
        curr = head;
        if((head->next)==NULL){
            newhead = head;
        }
        head = head->next;
        curr->next = prev;
        prev = curr;
    }
    return newhead;
}