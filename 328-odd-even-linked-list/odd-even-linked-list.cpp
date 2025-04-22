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
    ListNode* oddEvenList(ListNode* head) {
        ListNode* temp = head;
        ListNode* even = nullptr;
        ListNode* odd = nullptr;
        ListNode* finalodd = nullptr;
        ListNode* finaleven = nullptr;
        int i = 1;
        while (temp != nullptr) {
            if (i % 2 != 0) {
                if (i == 1) {
                    odd = temp;
                    finalodd = temp;
                } else {
                    odd->next = temp;
                    odd = temp;
                }
            } else {
                if (i == 2) {
                    even = temp;
                    finaleven = temp;
                } else {
                    even->next = temp;
                    even = temp;
                }
            }
            temp = temp->next;
            i++;
        }
        if (even != nullptr)
            even->next = nullptr;
        if (odd != nullptr)
            odd->next = finaleven;
        return finalodd;
    }
};