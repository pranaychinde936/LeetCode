from collections import defaultdict
class Solution:
    def minMirrorPairDistance(self, nums: List[int]) -> int:
        mp = defaultdict(list)
        n = len(nums)
        for i in range(n):
            mp[nums[i]].append(i)
        
        ans = 10e10
        print(mp)
        for i in range(n):
            rev_num = int(str(nums[i])[::-1])
            rev_num_idx_list = mp.get(rev_num)
            if rev_num_idx_list:
                for j in rev_num_idx_list:
                    if(i<j):
                        ans = min(ans, j - i)
                        if ans == 1:
                            return ans

        return ans if ans != 10e10 else -1