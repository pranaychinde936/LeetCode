class Solution:
    def numberOfBeams(self, bank: List[str]) -> int:
        n = len(bank)
        ans = 0
        lasers = [0] * n

        for i in range(n):
            for val in bank[i]:
                if val == '1':
                    lasers[i] += 1
        
        idx = 0
        last_device = 0

        for i in range(n):
            if lasers[i] != 0:
                idx = i
                last_device = lasers[i]
                break
        
        for i in range(idx+1, n):
            if lasers[i] != 0:
                ans += (last_device * lasers[i])
                last_device = lasers[i]
        
        print(lasers)
        return ans

