class MapSum:

    def __init__(self):
        """
        Initialize your data structure here.
        """
        self.pairs = {}
        

    def insert(self, key: str, val: int) -> None:
        self.pairs[key] = val
        

    def sum(self, prefix: str) -> int:
        total = 0
        for k, v in self.pairs.items():
            if(prefix == k[:len(prefix)]):
                total += v
        return total
        


# Your MapSum object will be instantiated and called as such:
# obj = MapSum()
# obj.insert(key,val)
# param_2 = obj.sum(prefix)
