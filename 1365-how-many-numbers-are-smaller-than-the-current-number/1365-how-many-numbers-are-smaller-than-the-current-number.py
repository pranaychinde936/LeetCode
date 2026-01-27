class Solution:
    def smallerNumbersThanCurrent(self, nums: List[int]) -> List[int]:
        n = len(nums)
        ans = []

        for i in range(n):
            temp = 0
            for j in range(n):
                if i != j:
                    if nums[j] < nums[i]:
                        temp += 1
            ans.append(temp)
                
        return ans