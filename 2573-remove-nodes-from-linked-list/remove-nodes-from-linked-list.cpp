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
    ListNode* reverse(ListNode* head){
        ln prev = NULL, curr = head;
        while(curr){
            ln next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
    ListNode* removeNodes(ListNode* head) {
        head = reverse(head);
        ln curr = head;
        int maxval = curr->val;
        while(curr && curr->next){
            if(curr->next->val < maxval){
                curr->next = curr->next->next;
            }
            else{
                curr = curr->next;
                maxval = curr->val;
            }
        }
        return reverse(head);
    }
};