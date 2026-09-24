/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if (!head) return head;
        Node* originalHead = head;
        while (head != nullptr){
            Node* temp = head->next;
            head->next = new Node(head->val);
            head = head->next;
            head->next = temp;
            head = head->next;
        }
        head = originalHead;
        while (head != nullptr){
            if (head->random) head->next->random = head->random->next;
            head = head->next->next;
        }
        originalHead = originalHead->next;
        head = originalHead;
        while (head != nullptr){
            if (head->next) head->next = head->next->next;
            head = head->next;
        }
        return originalHead;
    }
};
