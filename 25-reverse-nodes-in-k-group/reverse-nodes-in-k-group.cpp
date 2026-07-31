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
    
    ListNode* reverse(ListNode* head) {
        ListNode* prev = NULL;
        ListNode* curr = head;

        while (curr) {
            ListNode* nextNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextNode;
        }

        return prev;
    }

    ListNode* reverseKGroup(ListNode* head, int k) {

        ListNode* temp = head;
        for (int i = 0; i < k; i++) {
            if (temp == NULL)
                return head;
            temp = temp->next;
        }
        ListNode* curr = head;
        int count = 1;

        while (count < k) {
            curr = curr->next;
            count++;
        }

        ListNode* nextGroup = curr->next;
        curr->next = NULL;

        ListNode* newHead = reverse(head);
        head->next = reverseKGroup(nextGroup, k);

        return newHead;
    }
};