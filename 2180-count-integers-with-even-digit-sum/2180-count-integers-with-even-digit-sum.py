class Solution:
    def add_digs(self, n):
        sm = 0
        while n:
            sm += n%10
            n //= 10
        return sm % 2

    def countEven(self, num: int) -> int:
        ans = 0
        for i in range(1, num+1):
            if(self.add_digs(i) == 0):
                ans += 1

        return ans
        