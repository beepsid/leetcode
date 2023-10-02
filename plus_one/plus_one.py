class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        new = ''.join(map(str, digits))
        new=int(new)
        new=new+1
        new=str(new)
        new=[int(char) for char in new]
        return new