class Solution:
    def set_bits(self, num):
        ret = 0
        while num:
            if num & 1:
                ret += 1
            num >>= 1
        return ret

    def countBits(self, n: int) -> List[int]:
        ans = []

        for i in range(n+1):
            ans.append(self.set_bits(i))
        
        return ans
        
