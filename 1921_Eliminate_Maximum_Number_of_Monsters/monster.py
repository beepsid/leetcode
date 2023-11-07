from typing import List

class Solution:
    def eliminateMaximum(self, dist: List[int], speed: List[int]) -> int:
        n=len(dist)
        ans=[]
        for i in range(0,n):
            ans.append((dist[i]+speed[i]-1)//speed[i])

        ans.sort()

        count=0
        for i in range(0,n):
            if(ans[i]<=i):
                break
            count+=1
        
        return count

solution = Solution()

dist = [3,2,4]
speed = [5,3,2]

result = solution.eliminateMaximum(dist, speed)

print(result)
