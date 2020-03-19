class Solution:
    def spiralOrder(self, matrix: List[List[int]]) -> List[int]:
        
        if(not matrix):
            return matrix
        
        i, j = 0, 0
        m = len(matrix)
        n = len(matrix[0])
        count = m*n
        ans = []
        itr = 0
        while(count > 0):
            j = itr
            while(j < n):
                ans.append(matrix[i][j])
                count -= 1
                j += 1
            i += 1
            j -= 1
            if(count == 0):
                break
            while(i < m):
                ans.append(matrix[i][j])
                count -= 1
                i += 1
            j -= 1
            i -= 1
            if(count == 0):
                break
            while(j >= itr):
                ans.append(matrix[i][j])
                count -= 1
                j -= 1
            i -= 1
            j += 1
            itr += 1
            if(count == 0):
                break
            while(i >= itr):
                ans.append(matrix[i][j])
                count -= 1
                i -=  1
            i += 1
            m -= 1
            n -= 1
        return ans
