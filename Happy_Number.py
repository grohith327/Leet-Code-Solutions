class solution:
    def isHappy(self, n: int) -> bool:
        num = str(n)
        visited =[num]
        while(True):
            num = list(num)
            total = sum(map(lambda x: x**2, map(int, num)))
            if(total == 1):
                return True
            if(str(total) in visited):
                return False
            else:
                num = str(total)
                visited.append(num)
