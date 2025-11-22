class Solution:
    def transpose(self, matrix: List[List[int]]) -> List[List[int]]:
        m = len(matrix)
        n = len(matrix[0])

        ans_mat = []
        for j in range(n):
            temp = []
            for i in range(m):
                temp.append(matrix[i][j])
            ans_mat.append(temp)

        return ans_mat