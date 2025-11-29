class Solution:
    def convert_add_dig(self, val):
        print(f"type {type(val)}")
        if type(val) == str:
            n = ord(val) - 97 + 1
        else:
            n = val
        dsum = 0
        while n:
            print(n)
            dsum += n%10
            n = n // 10
        return dsum

    
    def getLucky(self, s: str, k: int) -> int:
        sm = 0
        for ch in s:
            sm += self.convert_add_dig(ch)
        
        while k > 1:
            sm = self.convert_add_dig(sm)
            k -= 1
        
        return sm
