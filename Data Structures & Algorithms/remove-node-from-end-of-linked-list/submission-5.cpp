/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if (head->next == nullptr) return nullptr;
        int len = 0;
        ListNode *curr = head , *prev;
        while (curr != nullptr){
            len++;
            curr = curr->next;
        }
        curr = head;
        len -= n;
        if (!len) return head->next;  
        while(--len) curr = curr->next;
        curr->next = curr->next->next;
        return head;
    }
};
