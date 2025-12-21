class Solution:
    def repeatedNTimes(self, nums: List[int]) -> int:
        mp = {}

        for num in nums:
            mp[num] = mp.get(num, 0) + 1
            if mp[num] > 1:
                return num
        
