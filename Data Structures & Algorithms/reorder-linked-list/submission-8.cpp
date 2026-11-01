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
    void reorderList(ListNode* head) {
        if (!head) return;
        if (!head->next) return;

        ListNode* fast{head->next};
        ListNode* slow{head};

        while (fast && fast->next){
            fast = fast->next->next;
            slow = slow->next;
        }

        ListNode* curr = slow->next;
        ListNode* prev = nullptr;
        slow->next = nullptr;
        while (curr){
            ListNode* temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
        }

        ListNode* head2 = prev;
        curr = head;
        while (head2){
            ListNode* temp1 = curr->next;
            ListNode* temp2 = head2->next;
            curr->next = head2;
            head2->next = temp1;
            curr = temp1;
            head2 = temp2;
        }
    }
};
