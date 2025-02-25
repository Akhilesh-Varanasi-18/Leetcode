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
        int x=0;
        ListNode* temp=head;
        while(head){
            x++;
            head=head->next;
        }
        int mid=x/2;
        for(int i=0;i<mid;i++){
            temp=temp->next;
        }
        return temp;  
    }
};