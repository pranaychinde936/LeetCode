class Solution:
    def minOperations(self, nums: List[int], k: int) -> int:
        no = 0
        for num in nums:
            if num < k:
                no += 1
            
        return no