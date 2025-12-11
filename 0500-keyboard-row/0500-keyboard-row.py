class Solution:
    def findWords(self, words: List[str]) -> List[str]:
        ans = []
        f_row = "qwertyuiop"
        s_row = "asdfghjkl"
        t_row = "zxcvbnm"
        # rows = ["qwertyuiop", "asdfghjkl", "zxcvbnm"]

        for word in words:
            l_word = word.lower()
            cnt1, cnt2, cnt3 = 0, 0, 0
            
            for ch in l_word:
                if ch in f_row:
                    cnt1 += 1
                elif ch in s_row:
                    cnt2 += 1
                else:
                    cnt3 += 1
            
            n = len(word)
            if cnt1 == n or cnt2 == n or cnt3 == n:
                ans.append(word)

        return ans