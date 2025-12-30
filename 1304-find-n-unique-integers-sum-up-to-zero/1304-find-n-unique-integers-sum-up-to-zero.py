class Solution:
    def sumZero(self, n: int) -> List[int]:
        ans = []
        i = 1
        if n % 2:
            ans.append(0)
            n -= 1
        
        while(n > 0):
            ans.append(i)
            ans.append(i * -1)
            i += 1
            n -= 2
                
        return ans