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
    ListNode* reverseList(ListNode* head) {
        if(head == nullptr || head->next == nullptr) return head;

    vector<int> ans;
    ListNode* temp = head;

    while(temp != nullptr) {
        ans.push_back(temp->val);
        temp = temp->next;
    }

    reverse(ans.begin(), ans.end());

    
    ListNode* newHead = new ListNode(ans[0]);
    ListNode* mover = newHead;
    for(int i = 1; i < ans.size(); i++) {
        ListNode* node = new ListNode(ans[i]);
        mover->next = node;
        mover = mover->next;
    }

    return newHead;
    }
};