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
    ListNode* sortList(ListNode* head) {
        ListNode* temp=head;
        vector<int>ans;
        while(temp!=nullptr){
            ans.push_back(temp->val);
            temp=temp->next;
        }
        if(ans.empty())return nullptr;
        sort(ans.begin(),ans.end());
        ListNode* newHead = new ListNode(ans[0]);
        ListNode* current=newHead;
        for(int i=1;i<ans.size();i++){
            current->next=new ListNode(ans[i]);
            current=current->next;
        }
        return newHead;
    }
};