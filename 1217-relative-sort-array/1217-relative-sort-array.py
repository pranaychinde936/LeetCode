class Solution:
    def relativeSortArray(self, arr1: List[int], arr2: List[int]) -> List[int]:
        mp = {}
        for val in arr1:
            mp[val] = mp.get(val, 0) + 1
        
        ans = []
        for val in arr2:
            if val in arr1:
                ans.extend([val] * mp[val])
        
        remaining = []
        for val in arr1:
            if val not in ans:
                remaining.append(val)

        ans.extend(sorted(remaining))
        return ans