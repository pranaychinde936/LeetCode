class Solution:
    def sortSentence(self, s: str) -> str:
        words = s.split(' ')
        ans_list = [''] * (len(words) + 1)
        for word in words:
            idx = int(word[-1])
            ans_list[idx] = word[:-1]
        
        ans_list.pop(0)
        return ' '.join(ans_list)