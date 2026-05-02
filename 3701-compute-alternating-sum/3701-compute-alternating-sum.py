class Solution:
    def alternatingSum(self, nums: List[int]) -> int:
        ans = nums[0]
        n = len(nums)
        for i in range(1, n):
            if(i % 2):
                ans -= nums[i]
            else:
                ans += nums[i]

        return ans