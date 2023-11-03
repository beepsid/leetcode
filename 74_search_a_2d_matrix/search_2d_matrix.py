class Solution:
    def searchMatrix(self, matrix: List[List[int]], target: int) -> bool:
        newl=[]
        for i in range(0,len(matrix)):
            for j in range(0,len(matrix[i])):
                newl.append(matrix[i][j])
        
        if (target in newl):
            return True
        else:
            return False