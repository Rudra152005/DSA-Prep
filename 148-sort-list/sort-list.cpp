class Solution {
public:
    typedef ListNode* ln;
    ListNode* findmid(ListNode* head){
        
        ln slow = head;
        ln fast = head->next;
        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;

        }
        return slow;
    }
    ListNode* mergetwo(ListNode* a, ListNode* b){
        if(a == NULL) return b;
        if(b == NULL) return a;
        if(a->val <= b->val){
            a->next = mergetwo(a->next, b);
            return a;
        }
        b->next = mergetwo(b->next, a);
        return b;
         
    }
    ListNode* sortList(ListNode* head) {
        if(head == NULL || head->next == NULL) return head;

        ln mid = findmid(head);
        ln right = mid->next;
        mid->next = NULL;
        ln left = head;
        left = sortList(left);
        right = sortList(right);
        return mergetwo(left, right);

    }
};