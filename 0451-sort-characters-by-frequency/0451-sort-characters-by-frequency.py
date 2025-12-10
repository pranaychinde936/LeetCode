class Solution:
    def frequencySort(self, s: str) -> str:
        mp = {}
        for ch in s:
            mp[ch] = mp.get(ch, 0) + 1
        
        sorted_chars = sorted(mp.keys(), key = lambda k: mp[k], reverse=True)
        ans = ''.join(ch * mp[ch] for ch in sorted_chars)
        return ans