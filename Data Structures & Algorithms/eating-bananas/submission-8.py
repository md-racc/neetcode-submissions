class Solution:
    def eat (self, piles:List[int], k: int) -> int:
        hours = 0
        for size in piles:
            if size < k:
                hours +=1
                continue
            if size % k == 0:
                hours += size // k
            else: hours+= size//k +1
        return hours
    
    def minEatingSpeed(self, piles: List[int], h: int) -> int:
        i = 1
        j = max(piles)
        while i < j:
            test = (i+j)//2
            if self.eat(piles, test) <= h:
                j = test
            else: i = test+1
        return i
        