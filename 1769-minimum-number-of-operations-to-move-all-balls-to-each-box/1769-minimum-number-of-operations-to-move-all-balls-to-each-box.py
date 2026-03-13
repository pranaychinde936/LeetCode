class Solution:
    def minOperations(self, boxes: str) -> List[int]:
        n = len(boxes)
        ans = []

        for i in range(n):
            curr = 0
            for j in range(n):
                if i != j and boxes[j] == '1':
                    curr += abs(i-j)
            ans.append(curr)
        
        return ans