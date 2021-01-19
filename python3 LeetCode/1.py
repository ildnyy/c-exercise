# 
# 717. 1比特与2比特字符
# 有两种特殊字符。第一种字符可以用一比特0来表示。第二种字符可以用两比特(10 或 11)来表示。

# 现给一个由若干比特组成的字符串。问最后一个字符是否必定为一个一比特字符。给定的字符串总是由0结束。
# 
class Solution:
    def isOneBitCharacter(self, bits: List[int]) -> bool:
        n = len(bits)
        x = 0
        while x < n:
            if bits[x] == 1:
                x+=1
            elif bits[x] == 0 and x == n-1:
                return True
            x+=1
        return False