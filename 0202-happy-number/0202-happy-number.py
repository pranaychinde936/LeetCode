class Solution:
    def add_dig(self, n):
        prod = 0
        while n:
            dig = n % 10
            prod += dig * dig
            n = n // 10
        return prod        


    def isHappy(self, n: int) -> bool:
        s = set()

        while n not in s:
            s.add(n)
            n = self.add_dig(n)
            # print(n)
            if n == 1:
                return True
        
        return False
"""
2
4
16
37
58
89
145
42
20
4
"""