class Solution:
    def diagonalSum(self, mat: List[List[int]]) -> int:
        n = len(mat)
        ans = 0

        for i in range(n):
            for j in range(n):
                if i == j:
                    ans += mat[i][j]
                if i+j == n-1:
                    ans += mat[i][j]
        
        if n % 2:
            ans -= mat[n//2][n//2]
        
        return ans
        