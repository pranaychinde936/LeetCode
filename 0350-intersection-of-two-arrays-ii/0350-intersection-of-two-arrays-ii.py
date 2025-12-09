class Solution:
    def intersect(self, nums1: List[int], nums2: List[int]) -> List[int]:
        ans = []
        mp1 = {}
        mp2 = {}

        for num in nums1:
            mp1[num] = mp1.get(num, 0) + 1

        for num in nums2:
            mp2[num] = mp2.get(num, 0) + 1

        for num in nums1:
            if mp2.get(num, 0) != 0:
                ans.append(num)
                mp2[num] -= 1
        return ans