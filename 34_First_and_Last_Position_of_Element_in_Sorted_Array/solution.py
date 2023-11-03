class Solution:
    def searchRange(self, nums, target):
        arr=[-1,-1]
        
        for i in range(len(nums)):
            if nums[i] == target:
                if arr[0] == -1:
                    arr[0] = i
                arr[1] = i  
        
        return arr