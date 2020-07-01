import math


class Solution:
    def arrangeCoins(self, number: int) -> int:
        """ Finds highest n such that (n*n+1)//2<=number """
        top = round(math.sqrt(2*number))
        for n in range(top, -1, -1):
            if n*(n+1) <= (2*number):
                return n
        return 0


if __name__ == "__main__":
    a = Solution()
    for i in range(0, 1000):
        print(f"{i}: {a.arrangeCoins(i)}")
