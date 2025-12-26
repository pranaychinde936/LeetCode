# The isBadVersion API is already defined for you.
# def isBadVersion(version: int) -> bool:

class Solution:
    def firstBadVersion(self, n: int) -> int:
        low, high = 1, n
        mid = 0
        ans = 0

        while low <= high:
            mid = low + (high - low)//2
            is_bad = isBadVersion(mid)
            if is_bad:
                ans = mid
                high = mid - 1
            else:
                low = mid + 1
        
        return ans