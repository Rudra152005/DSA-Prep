# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def addTwoNumbers(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:
        def reverse(head):
            prev = None
            curr = head
            while curr:
                nextnode = curr.next
                curr.next = prev
                prev = curr
                curr = nextnode
            return prev

        dummy = ListNode(0)
        curr = 0
        temp = dummy
        a1 = reverse(l1)
        a2 = reverse(l2)
        while a1 or a2:
            sum = curr
            if a1:
                sum += a1.val
                a1 = a1.next
            if a2:
                sum += a2.val
                a2 = a2.next
            curr = sum // 10
            digit = sum % 10
            temp.next = ListNode(digit)
            temp = temp.next
        if curr:
            temp.next = ListNode(curr)
        return reverse(dummy.next)
        