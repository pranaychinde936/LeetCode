class Solution:
    def shift(self, c: str, x: int) -> str:
        new_ch = ord(c) + int(x)
        return chr(new_ch)

    def replaceDigits(self, s: str) -> str:
        ans = ""
        n = len(s)

        for i in range(n):
            if i % 2:
                ans += self.shift(s[i-1], s[i])
            else:
                ans += s[i]
        
        return ans