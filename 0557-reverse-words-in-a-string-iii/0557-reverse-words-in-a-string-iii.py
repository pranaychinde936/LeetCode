class Solution:
    def reverseWords(self, s: str) -> str:
        words = s.split(" ")
        ans_list = []
        for word in words:
            ans_list.append(word[::-1])
        
        return ' '.join(ans_list)