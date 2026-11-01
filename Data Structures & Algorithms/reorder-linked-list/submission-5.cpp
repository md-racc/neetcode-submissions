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
        std::unordered_map<int, ListNode*> seen;

        ListNode* curr = head;
        int idx{0};
        while (curr){
            seen[idx] = curr;
            idx++;
            curr =curr->next;
        }

        int left{1};
        int right{idx-1};
        ListNode* curr2 = head;
        while (left <= right){
            if (left == right){
                curr2->next = seen[right];
            }
            curr2->next = seen[right];
            curr2->next->next = seen[left];
            left++;
            right--;
            curr2 = curr2->next->next;
        }
        if (left == right){
            curr2->next = seen[left];
            curr2 = curr2->next;
        }
        curr2->next = nullptr;
    }
};
