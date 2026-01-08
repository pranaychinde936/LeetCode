class Solution:
    def deleteGreatestValue(self, grid: List[List[int]]) -> int:
        for row in grid:
            row.sort()
        
        m, n = len(grid), len(grid[0])

        ans = 0
        for j in range(n-1, -1, -1):
            maxi = -1
            for i in range(m):
                maxi = max(maxi, grid[i][j])
            ans += maxi

        return ans