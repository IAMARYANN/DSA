/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* detectCycle(ListNode* head) {
        ListNode* temp = head;
        unordered_map<ListNode*,bool>ans;
        while(temp!=nullptr){
            if(ans[temp]){
                return temp;
            }
            ans[temp]=true;
            temp=temp->next;
        }
        return nullptr;
    }
};