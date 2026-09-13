# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def addTwoNumbers(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:
        dummy = ListNode(0)
        temp = dummy
        curr = 0

        while l1 or l2:
            sum = curr

            if l1:
                sum += l1.val
                l1 = l1.next

            if l2:
                sum += l2.val
                l2 = l2.next

            curr = sum // 10
            digit = sum % 10

            temp.next = ListNode(digit)
            temp = temp.next

        if curr:
            temp.next = ListNode(curr)

        return dummy.next