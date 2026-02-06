class Solution:
    def mirrorDistance(self, n: int) -> int:
        h = int(str(n)[::-1])
        return abs(n - h)