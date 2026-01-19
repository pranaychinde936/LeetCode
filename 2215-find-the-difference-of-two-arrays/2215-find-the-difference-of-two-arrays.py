class Solution:
    def findDifference(self, nums1: List[int], nums2: List[int]) -> List[List[int]]:
        first = []
        second = []

        mp = {}

        for num in nums1:
            if mp.get(num, 0) == 0:
                mp[num] = 1
        
        for num in nums2:
            if mp.get(num, 0) == 1:
                mp[num] += 1
        
        for num in nums1:
            if mp.get(num, 0) != 2 and num not in first:
                first.append(num)
        
        for num in nums2:
            if mp.get(num, 0) != 2 and num not in second:
                second.append(num)

        return [first, second]