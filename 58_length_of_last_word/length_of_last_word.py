class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        s=s[::-1]
        s=s.lstrip(" ")
        count=0
        for i in range(0,len(s)):
            if(s[i]!=" "):
                count+=1
            else:
                break
        return count