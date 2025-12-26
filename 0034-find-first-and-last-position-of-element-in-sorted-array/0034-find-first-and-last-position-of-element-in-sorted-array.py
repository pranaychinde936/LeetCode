class Solution:
    def searchRange(self, nums: List[int], target: int) -> List[int]:
        ans = [-1, -1]
        n = len(nums)

        if n == 0:
            return ans
        
        low, high = 0, n-1
        mid = 0

        while low <= high:
            mid = low + (high-low)//2
            print(mid)
            if nums[mid] == target:
                ans[0] = mid
                high = mid - 1
            elif nums[mid] > target:
                high = mid - 1
            else:
                low = mid + 1
        
        low, high = 0, n-1
        mid = 0
        while low <= high:
            mid = low + (high-low)//2
            if nums[mid] == target:
                ans[1] = mid
                low = mid + 1
            elif nums[mid] > target:
                high = mid - 1
            else:
                low = mid + 1
        
        return ans