class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        mp = {}

        for num in nums:
            mp[num] = mp.get(num, 0) + 1
    
        sorted_vals = sorted(mp.keys(), key = lambda k : mp[k], reverse = True)
        print(sorted_vals)
        
        return sorted_vals[:k]

        