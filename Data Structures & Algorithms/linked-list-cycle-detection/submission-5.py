# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

class Solution:
    def hasCycle(self, head: Optional[ListNode]) -> bool:
        seen = set()
        curr = head
        seen.add(curr)
        while (curr and curr.next):
            curr = curr.next
            if curr not in seen:
                seen.add(curr)
            else:
                return True
        return False
        