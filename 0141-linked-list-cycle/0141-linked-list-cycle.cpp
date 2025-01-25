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
    bool hasCycle(ListNode *head) {
        ListNode* tor=head;
        ListNode* rab=head;
        while(rab && rab->next){
            tor=tor->next;
            rab=rab->next->next;
            if(rab==tor) return true;
        }
        return false;
        
    }
};