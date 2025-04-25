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
    ListNode* rotateRight(ListNode* head, int k) {
       if (head == nullptr || head->next == nullptr || k == 0) return head;
        ListNode* temp=head;
        vector<int>ans;
        while(temp!=nullptr){
            ans.push_back(temp->val);
            temp=temp->next;
        }
        int n=ans.size();
        k=k%n;
        vector<int>ans1(n);
        for(int i=0;i<ans.size();i++){
            int a =(i+k)%n;
            ans1[a]=ans[i];
        }
        ListNode* dummy=new ListNode(ans1[0]);
        temp=dummy;
        for(int i=1;i<n;i++){
            ListNode* hehe =new ListNode(ans1[i]);
            temp->next=hehe;
            temp=hehe;
        }
        return dummy;
    }
};