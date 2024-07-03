class Solution(object):
    def __init__(self) -> None:
        pass

    def convert(self, s, numRows):
        """
        :type s: str
        :type numRows: int
        :rtype: str
        """
        arr = [[] for x in range(numRows)]
        down = True 
        currRow = 0 
        for i in range(len(s)): 
            if (down): 
                arr[currRow].append(i)
                currRow += 1 
            else: 
                arr[currRow].append(i) 
                currRow -= 1 
            if currRow == -1: 
                down = not down 
                currRow += 2
                currRow = currRow % numRows
            elif currRow == numRows: 
                down = not down 
                currRow -= 2
                currRow = currRow % numRows

        zig = ""
        for i in arr: 
            for x in i: 
                zig += s[x]
        print(arr)
        return zig
    
p1 = Solution()
p1.convert("PAYPALISHIRING", 3)