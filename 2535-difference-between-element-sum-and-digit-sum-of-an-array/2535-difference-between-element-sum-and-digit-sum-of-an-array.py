class Solution:
    def single_dig_sum(self, num):
        ssm = 0
        while(num):
            ssm += num % 10
            num //= 10
        return ssm

    def dig_sum(self, nums):
        sm = 0
        for num in nums:
            sm += self.single_dig_sum(num)
        
        return sm

    def differenceOfSum(self, nums: List[int]) -> int:
        return abs(sum(nums) - self.dig_sum(nums))