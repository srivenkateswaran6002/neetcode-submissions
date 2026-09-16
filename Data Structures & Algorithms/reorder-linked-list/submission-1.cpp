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
    void reorder(ListNode* head , int n){
        if (n == 0) return;
        ListNode* prev , *curr; 
        curr = head;
        while (curr->next != nullptr) {
            prev = curr;
            curr = curr->next;
        }
        ListNode* temp = head->next;
        head->next = curr;
        curr->next = temp;
        prev->next = nullptr; 
        reorder(head->next->next , n - 1);
        return;
    }
    void reorderList(ListNode* head) {
        if (head == nullptr || head->next == nullptr) return;
        int len = 1;
        ListNode *temp = head;
        while (temp->next != nullptr) {
            len++;
            temp = temp->next;
        }
        int n = (len - 1) / 2;
        reorder(head , n);
    }
};
