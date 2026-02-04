class Solution:
    def reverseByType(self, s: str) -> str:
        eng, spe = "", ""
        for ch in s:
            if ord(ch) >= 97 and ord(ch) <= 122:
                eng += ch
            else:
                spe += ch
        
        eng = eng[::-1]
        spe = spe[::-1]

        ans = ""
        i, j = 0, 0

        for ch in s:
            if ch >= "a" and ch <= "z":
                ans += eng[i]
                i += 1
            else:
                ans += spe[j]
                j += 1


        return ans