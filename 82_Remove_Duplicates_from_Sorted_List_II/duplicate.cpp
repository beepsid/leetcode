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
    ListNode* deleteDuplicates(ListNode* head) {
        if (head != nullptr) {
            if (head->next != nullptr) {
                if (head->val == head->next->val) {
                    ListNode* headTemp = deleteDuplicates(head->next);
                    if (headTemp != nullptr && head->val == headTemp->val) {
                        if (headTemp != nullptr) {
                            return headTemp->next;
                        }
                        return nullptr;
                    }
                    return headTemp;
                } else {
                    head->next = deleteDuplicates(head->next);
                }
            }
        }
        return head;
    }
};