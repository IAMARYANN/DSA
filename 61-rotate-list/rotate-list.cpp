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
       if(head == nullptr || head->next==nullptr || k==0)return head;
       int len=1;
       ListNode* tail=head;
       while(tail->next!=nullptr){
          len++;
          tail=tail->next;
       }
       tail->next=head;
       k=k%len;
       int a =len-k-1;
       ListNode *newHead=head;
       while(a){
          newHead=newHead->next;
           a--;
       }
       ListNode *hehe=newHead->next;
       newHead->next=nullptr;

       return hehe;
    }
};