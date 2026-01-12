class Solution:
    def halvesAreAlike(self, s: str) -> bool:
        s = s.lower()
        cnt1, cnt2 = 0, 0
        i = 0
        n = len(s)

        for i in range(n):
            # if ch == "a" or ch == "e" or ch == "i" or ch == "o" or ch == "u" or \
            #    ch == "A" or ch == "E" or ch == "I" or ch == "O" or ch == "U":
            if s[i] in ('a', 'e', 'i', 'o', 'u'):
                if i < n//2:
                    cnt1 += 1
                else:
                    cnt2 += 1

        return cnt1 == cnt2