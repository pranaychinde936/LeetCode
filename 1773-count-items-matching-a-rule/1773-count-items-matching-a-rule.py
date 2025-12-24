class Solution:
    def countMatches(self, items: List[List[str]], ruleKey: str, ruleValue: str) -> int:
        idx = -1

        if ruleKey == "type":
            idx = 0
        elif ruleKey == "color":
            idx = 1
        else:
            idx = 2
        
        ans = 0
        for item in items:
            if item[idx] == ruleValue:
                ans += 1
        

        return ans