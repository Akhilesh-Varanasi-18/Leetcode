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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        vector<int>li;
        ListNode* temp=list1;
        ListNode* dum=list2;
        if(!temp && !dum) return list1;
        while(temp){
            li.push_back(temp->val);
            temp=temp->next;
        }
        while(dum){
            li.push_back(dum->val);
            dum=dum->next;
        }
        sort(li.begin(),li.end());
        ListNode* fin=new ListNode(li[0]);
        ListNode* cur=fin;
        for(int i=1;i<li.size();i++){
            cur->next=new ListNode(li[i]);
            cur=cur->next;
        }
        return fin;
    }
};