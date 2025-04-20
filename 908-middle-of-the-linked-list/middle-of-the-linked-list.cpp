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
    ListNode* middleNode(ListNode* head) {
        ListNode *temp=head;
        int cnt=1;
        while(temp->next != nullptr ){
            cnt++;
            temp=temp->next;
        }
            cnt=cnt/2;
            cnt=cnt+1;
        temp=head;
        while(cnt>1){
            cnt--;
            temp=temp->next;
        }
        return temp;
    }
};