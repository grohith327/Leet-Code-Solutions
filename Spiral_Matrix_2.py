class Solution:
    def generateMatrix(self, n: int) -> List[List[int]]:
        
        matrix = []
        for i in range(n):
            temp = []
            for j in range(n):
                temp.append(-1)
            matrix.append(temp)
        
        i, j = 0, 0 
        m = n
        count = n**2
        value = 1
        itr = 0
        while(count > 0):
            j = itr
            while(j < n):
                matrix[i][j] = value
                value += 1
                count -= 1
                j += 1
            i += 1
            j -= 1
            if(count == 0):
                break
            
            while(i < m):
                matrix[i][j] = value
                value += 1
                count -= 1
                i += 1
            i -= 1
            j -= 1
            if(count == 0):
                break
            
            while(j >= itr):
                matrix[i][j] = value
                value += 1
                count -= 1
                j -= 1
            i -= 1
            j += 1
            itr += 1
            if(count == 0):
                break
            
            while(i >= itr):
                matrix[i][j] = value
                value += 1
                count -= 1
                i -= 1
            i += 1
            n -= 1
            m -= 1
        
        return matrix
