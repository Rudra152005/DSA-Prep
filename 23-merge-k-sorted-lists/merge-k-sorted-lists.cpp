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
    ListNode* solve(vector<ListNode*> &lists, int l, int r){
        if(l == r){
            return lists[l];
        }
        int mid = l + (r - l)/2;
        ln left = solve(lists, l, mid);
        ln right = solve(lists, mid + 1, r);
        return mergetwo(left, right);
        
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.size() == 0) return NULL;

        return solve(lists, 0, lists.size() - 1);
    }
};