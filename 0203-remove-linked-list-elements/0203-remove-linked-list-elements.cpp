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
    ListNode* removeElements(ListNode* head, int val) {
        if(head==NULL)return NULL;
        ListNode* demo=new ListNode(0);
        demo->next=head;
        ListNode* temp=head;
        ListNode* prev=demo;
        while(temp){
            if(temp->val == val){
                prev->next=temp->next;
                delete temp;
                temp=prev->next;
            }
            else{
                prev=temp;
                temp=prev->next;    
            }
        }
        // ListNode* newHead = dummy->next;
        // delete dummy;
        return demo->next;
    }      
};