class Solution:
    def maxArea(self, height: List[int]) -> int:
        """
        # brute force
        n = len(height)
        ans = 0
        for i in range(n):
            for j in range(i+1, n):
                ans = max(ans, min(height[i], height[j]) * (j - i))
        
        return ans
        """

        l, r = 0, len(height)-1
        ans = 0

        while(l<r):
            ans = max(ans, min(height[l], height[r]) * (r-l))
            if height[l] < height[r]:
                l += 1
            else:
                r -= 1
        
        return ans