class Solution:
    def maxSubArray(self, nums: List[int]) -> int:

        # I love Kadane's algorithm 

        max = nums[0]
        temp = 0
        for x in nums: 
            temp += x
            if temp > max: 
                max = temp 
            if temp < 0: 
                temp = 0 
        return max
        
# holy shit kadan'es algorithm rocks 