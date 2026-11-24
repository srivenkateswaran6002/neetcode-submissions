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
        int len = 1;
        ListNode *curr = head , *prev;
        while (curr->next != nullptr){
            len++;
            curr = curr->next;
        }
        curr = head;
        int target = len - n;
        int i = 0;
        cout << len << " " << target << endl;
        while(i < target) {
            cout << i << endl;
            if (i == target - 1) {
                if (curr->next == nullptr) prev->next = nullptr;
                else ;
                return head;
            }
            prev = curr;
            i++;
            curr = curr->next;
        }
        return nullptr;
    }
};
