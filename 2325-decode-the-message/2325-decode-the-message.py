class Solution:
    def decodeMessage(self, key: str, message: str) -> str:
        mp = {}
        no = 97

        for ch in key:
            if ch != " " and mp.get(ch, None) == None:
                mp[ch] = chr(no)
                no += 1
            
        mp[" "] = " "
        ans = ""
        for ch in message:
            ans += mp[ch]

        return ans