class Solution:
    def kthDistinct(self, arr: List[str], k: int) -> str:
        mp = {}

        for strg in arr:
            mp[strg] = mp.get(strg, 0) + 1
        
        for strg in arr:
            if mp.get(strg) == 1:
                k -= 1
                if k == 0:
                    return strg
        
        return ""