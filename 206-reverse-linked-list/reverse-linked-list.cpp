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
    typedef ListNode* ln;
    ListNode* reverseList(ListNode* head) {
        ln prev = NULL;
        ln curr = head;
        while(curr){
            ln next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;

        }
        return prev;
        
    }
};