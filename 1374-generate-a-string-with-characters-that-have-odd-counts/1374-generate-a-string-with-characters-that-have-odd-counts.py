class Solution:
    def generateTheString(self, n: int) -> str:
        if n % 2:
            return "m" * n
        
        ans = "m" * (n-1)
        ans = ans + "n"
        return ans