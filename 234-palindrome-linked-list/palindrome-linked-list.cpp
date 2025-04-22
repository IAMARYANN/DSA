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
    ListNode* reverseit(ListNode* newHead) {
        ListNode* prev = nullptr;
        ListNode* temp = newHead;

        while (temp != nullptr) {
            ListNode* front = temp->next;
            temp->next = prev;
            prev = temp;
            temp = front;
        }
        return prev;
    }

public:
    bool isPalindrome(ListNode* head) {
        if (head == nullptr || head->next == nullptr) return true;

        ListNode* temp = head;
        ListNode* slow = head;
        ListNode* fast = head;

        // Find middle
        while (fast->next != nullptr && fast->next->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        }

        // Reverse second half
        ListNode* newtemp = reverseit(slow->next);

        // Compare both halves
        while (newtemp != nullptr) {
            if (temp->val != newtemp->val) {
                return false;
            }
            temp = temp->next;
            newtemp = newtemp->next;
        }

        return true;
    }
};