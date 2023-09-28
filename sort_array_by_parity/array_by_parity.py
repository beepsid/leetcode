class Solution:
    def sortArrayByParity(self, nums: List[int]) -> List[int]:
        evennum = []
        oddnum = []
        for i in nums:
            if i % 2 == 0:
                evennum.append(i)
            else:
                oddnum.append(i)
        
        return evennum+oddnum