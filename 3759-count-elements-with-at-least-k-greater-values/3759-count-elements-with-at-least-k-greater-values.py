class Solution:
    def countElements(self, nums: List[int], k: int) -> int:
        nums.sort()
        n = len(nums)

        mp = {}
        for num in nums:
            mp[num] = mp.get(num, 0) + 1
    
        ans = 0
        prev = -1
        # print(mp)
        for i in range(n):
            candidates = n - i - mp[nums[i]]
            # print(candidates, nums[i])
            if candidates >= k:
                if prev == nums[i]:
                    continue
                ans += mp[nums[i]]
            
            prev = nums[i]

        return ans

        