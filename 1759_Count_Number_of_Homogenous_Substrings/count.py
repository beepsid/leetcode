class Solution:
    def countHomogenous(self, s: str) -> int:
        count = 0
        prev = ''
        res = 0
        m = 1000000007

        for i in s:
            if i == prev:
                count+=1
            else:
                count = 1
            res+=count
            prev = i 
        return res%m