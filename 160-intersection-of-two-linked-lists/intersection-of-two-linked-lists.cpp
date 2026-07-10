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
    typedef ListNode* ln;
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ln a = headA;
        ln b = headB;
        while(a != b){
            a = (a == nullptr)?headB : a->next;
            b = (b == nullptr)?headA : b->next;
        }
        return a;
    }
};