class Solution:
    def myAtoi(self, string: str) -> int:
        string = list(string)
        for i in range(len(string)):
            if(ord(string[i]) != 32):
                break
            string[i]='_'
        string = ''.join(string)
        string = string.replace('_','')
        if(not string):
            return 0
        number = []
        if(ord(string[0]) < 48 or ord(string[0]) > 57):
            if(ord(string[0]) == 43):
                for i in range(1, len(string)):
                    # print(ord(string[i]))
                    if(ord(string[i]) < 48 or ord(string[i]) > 57):
                        break
                    number.append(string[i])
                if(len(number) == 0):
                    return 0
                final_num = int(''.join(number))
                if(final_num > 2**31 - 1):
                    return 2**31 - 1
                return final_num
            if(ord(string[0]) == 45):
                for i in range(1, len(string)):
                    if(ord(string[i]) < 48 or ord(string[i]) > 57):
                        break
                    number.append(string[i])
                if(len(number) == 0):
                    return 0
                final_num = int(''.join(number)) * -1
                if(final_num < -2**31):
                    return -2**31
                return final_num
            
        else:
            for i in range(len(string)):
                if(ord(string[i]) < 48 or ord(string[i]) > 57):
                    break
                number.append(string[i])
        
        if(len(number) == 0):
            return 0
        
        final_num = int(''.join(number))
        if(final_num > 2**31 - 1):
            return 2**31 - 1
        
        return final_num
