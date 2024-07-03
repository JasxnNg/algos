class Solution {
    public static void sortColors(int[] nums) {
        int currNum = 0; 
        int lastNum = nums.length - 1; 
        int zeroes = 0; 
        while (currNum <= lastNum) {
            if (nums[currNum] == 2) {
                nums[currNum] = nums[lastNum]; 
                nums[lastNum] = 2; 
                lastNum--; 
             }
            else if (nums[currNum] == 0) {
                nums[currNum] = nums[zeroes];
                nums[zeroes] = 0; 
                if (currNum == zeroes)
                    currNum++; 
                zeroes++; 
    
            }
            else {
                currNum++;
            }
            System.out.println(currNum + " " + lastNum + " " + zeroes);
        }
        
    }
    public static void main (String[] args) {
        int[] nums = {2, 0, 1}; 
        sortColors(nums);
        for (int i = 0; i < nums.length; i++)
            System.out.print(nums[i] + " ");
    }
}