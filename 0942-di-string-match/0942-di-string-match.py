class Solution:
    def diStringMatch(self, s: str) -> List[int]:
        inc, dec = 0, len(s)

        ans = []
        for ch in s:
            if ch == "I":
                ans.append(inc)
                inc += 1
            else:
                ans.append(dec)
                dec -= 1
        
        ans.append(inc)
        return ans