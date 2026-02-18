class Solution:
    def mapWordWeights(self, words: List[str], weights: List[int]) -> str:
        ans = ""

        for word in words:
            ww = 0
            for ch in word:
                ww += weights[ord(ch)-97]

            ww = ww % 26
            ans += chr(26 - ww + 97 - 1)
        
        return ans