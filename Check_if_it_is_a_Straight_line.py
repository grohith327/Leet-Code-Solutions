class Solution:
    def checkStraightLine(self, coordinates: List[List[int]]) -> bool:
        x_1 = coordinates[0][0]
        y_1 = coordinates[0][1]
        for coord in coordinates[1:]:
            x_2 = coord[0]
            y_2 = coord[1]
            if(x_2 != x_1):
                break
            
        m = (y_2 - y_1) / (x_2 - x_1)
        for coord in coordinates[2:]:
            x = coord[0]
            y = coord[1]
            out = y - y_1 - m*(x - x_1)
            if(out != 0):
                return False
        return True
