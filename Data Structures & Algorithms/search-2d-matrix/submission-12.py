class Solution:
    def searchMatrix(self, matrix: List[List[int]], target: int) -> bool:
        i = 0
        width = len(matrix[0])
        j = width*len(matrix) -1

        while i <= j:
            mid = i + (j - i)//2
            if target == matrix[mid // width][mid % width]:
                return True
            elif target > matrix[mid // width][mid % width]:
                i = mid +1
            else:
                j = mid -1

        return False;
        