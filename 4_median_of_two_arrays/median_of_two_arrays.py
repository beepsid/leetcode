class Solution:
    def findMedianSortedArrays(self, nums1: List[int], nums2: List[int]) -> float:
        arr3 = []
        m, n = len(nums1), len(nums2)
        i = j = 0

        while i < m and j < n:
            if nums1[i] < nums2[j]:
                arr3.append(nums1[i])
                i += 1
            else:
                arr3.append(nums2[j])
                j += 1

        arr3.extend(nums1[i:])
        arr3.extend(nums2[j:])

        t = m + n
        if t % 2 == 1:
            return arr3[t // 2]
        
        return (arr3[t // 2] + arr3[t // 2 - 1]) / 2.0
