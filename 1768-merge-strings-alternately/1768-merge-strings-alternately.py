class Solution:
    def mergeAlternately(self, word1: str, word2: str) -> str:
        i, j = 0, 0
        m, n = len(word1), len(word2)

        flag = True
        ans = ""
        while i < m and j < n:
            if flag:
                ans += word1[i]
                i += 1
            else:
                ans += word2[j]
                j += 1
            flag = not flag

        if i != m:
            ans += word1[i:]
        elif j != n:
            ans += word2[j:]
        
        return ans