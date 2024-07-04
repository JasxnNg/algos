class Solution(object):
    def lengthOfLastWord(self, s):
        """
        :type s: str
        :rtype: int
        """
        s = s.split(" ")
        i = 1
        print(len(s[len(s) - 1 ]))
        while (len(s[len(s) - i])) == 0: 
            i = i + 1 
        return len(s[len(s) - i])
    def __init__(self) -> None:
        pass


hi = Solution()
print(hi.lengthOfLastWord("Hello World "))