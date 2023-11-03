class Solution:
    def sortColors(self, nums: List[int]) -> None:
        tmp=0
        low=0
        mid=0
        high=len(nums)-1
        while(mid<=high):
            if(nums[mid]==0):
                tmp=nums[low]
                nums[low]=nums[mid]
                nums[mid]=tmp
                low+=1
                mid+=1
            
            elif(nums[mid]==1):
                mid+=1

            elif(nums[mid]==2):
                tmp=nums[high]
                nums[high]=nums[mid]
                nums[mid]=tmp
                high-=1
        return nums