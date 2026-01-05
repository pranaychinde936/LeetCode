class Solution:
    def divideString(self, s: str, k: int, fill: str) -> List[str]:
        ans = []
        n = len(s)
        if n < k:
            return [s + (fill * (k-n))]
        
        for i in range(0, n, k):
            if (i+k) > n:
                temp = s[i:]
                temp += fill * ((i+k) - n)
                ans.append(temp)
            else:
                ans.append(s[i:(i+k)])


        return ans