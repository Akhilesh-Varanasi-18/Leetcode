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
        ListNode* i=head;
        if(!i) return i;
        ListNode* j=head->next;
        while(j){
            if(i->val==j->val){
                j=j->next;
            }
            else{
                i->next=j;
                i=j;
                j=j->next;
            }
        }
        i->next=NULL;
        return head;
    }
};