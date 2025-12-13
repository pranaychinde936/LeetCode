class Solution:
    def recoverOrder(self, order: List[int], friends: List[int]) -> List[int]:
        mp = {}
        for friend in friends:
            mp[friend] = mp.get(friend, 0) + 1
        
        ans = []

        for val in order:
            if mp.get(val):
                ans.append(val)

        return ans