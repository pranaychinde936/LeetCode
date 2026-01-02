class Solution:
    def balancedStringSplit(self, s: str) -> int:
        ans = 0
        rs, ls = 0, 0

        for ch in s:
            if ch == "L":
                ls += 1
            else:
                rs += 1
                
            if ls == rs and ls != 0:
                ans += 1
                ls = 0
                rs = 0
            
        
        return ans