class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        for i in range(len(nums) - 1):
            single = target - nums[-i - 1]

            for j in range(len(nums) - i - 1):
                if nums[j] == single:
                    return [len(nums) - i - 1, j]
