class Solution:
    def mySqrt(self, x: int) -> int:
        l, r = 0, x // 2 if x > 1 else x  #l = 0 / r=x//2 if x>1 else it prints x

        while l <= r:
            mid = (l + r) // 2
            mid2 = mid * mid

            if mid2 == x:
                return mid
            elif mid2 < x:
                l = mid + 1
            elif mid2 > x:
                r = mid - 1
        
        return r