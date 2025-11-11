class Solution:
    def findMissingAndRepeatedValues(self, grid: List[List[int]]) -> List[int]:
        mp = {}
        n = len(grid)
        
        for row in grid:
            for ele in row:
                mp[ele] = mp.get(ele, 0) + 1
        
        for i in range(1, (n*n)+1):
            if mp.get(i) == None:
                missing = i
            if mp.get(i) == 2:
                repeated = i

        return [repeated, missing]