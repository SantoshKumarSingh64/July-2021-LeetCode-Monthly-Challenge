class Solution:
    def matrixReshape(self, mat: List[List[int]], r: int, c: int) -> List[List[int]]:
        
        n = len(mat)
        m = len(mat[0])
        
        if n*m != r*c:
            return mat
        
        row = 0
        col = -1
        
        ans = [[0 for x in range(c)] for y in range(r)]
    
        for i in range(r):
            for j in range(c):
                
                if col == m-1:
                    row += 1
                    col = 0
                else:
                    col += 1
                
                print(row,col)
                ans[i][j] = mat[row][col]
        return ans
