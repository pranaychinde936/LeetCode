from collections import Counter
class Solution:
    def findLucky(self, arr: List[int]) -> int:
        mp = {}
        for val in arr:
            mp[val] = mp.get(val, 0) + 1
        # mp = Counter(arr)
        
        ans = -1
        for key, value in mp.items():
            if key == value:
                ans = max(key, ans)
        
        return ans

        