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
        ln curr = head, prev = NULL;
        while(curr){
            ln next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
    bool isPalindrome(ListNode* head) {
        if(!head && !head->next){
            return true;
        }
        ln fast = head;
        ln slow = head;
        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        ln second = reverse(slow);
        ln first = head;
        while(second){
            if(first->val != second->val){
                return false;
            }
            first = first->next;
            second = second->next;
        }
        return true;
    }
};