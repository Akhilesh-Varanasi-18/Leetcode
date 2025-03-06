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
    ListNode* swapPairs(ListNode* head) {
        ListNode dummy(0); // Create a dummy node
        dummy.next = head;
        ListNode* prev = &dummy;
        ListNode* curr = head;

        while (curr && curr->next) {
            ListNode* nextPair = curr->next->next; // Store next pair start
            ListNode* second = curr->next;

            // Swap the pair
            prev->next = second;
            second->next = curr;
            curr->next = nextPair;

            // Move pointers forward
            prev = curr;
            curr = nextPair;
        }

        return dummy.next;
    }
};