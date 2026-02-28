class Solution:
    def word_to_int(self, word):
        n = len(word)
        i = 0

        ans = ""
        while i < n:
            ans += str(ord(word[i]) - 97)
            i += 1
        
        return int(ans)


    def isSumEqual(self, firstWord: str, secondWord: str, targetWord: str) -> bool:
        summ = self.word_to_int(firstWord) + self.word_to_int(secondWord)
        target = self.word_to_int(targetWord)

        return summ == target