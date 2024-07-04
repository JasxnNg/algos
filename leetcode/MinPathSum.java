class MinPathSum {
    public int minPathSum(int[][] grid) {
        // you can only go down or right 
        // you can iterate through the rows 
        for (int i = 0; i < grid.length; i++ ) {
            for (int j = 0; j < grid[i].length;j++) {
                
                if (i > 0 && j == 0) {
                    grid[i][0] += grid[i - 1][j];
                }
                else if (i == 0 && j > 0) {
                    grid[0][j] += grid[0][j - 1]; 
                }
                else if (i > 0 && j > 0) {
                    int temp = grid[i - 1][j]; 
                    if (temp < grid[i][j - 1]) {
                        grid[i][j] += temp; 
                    }
                    else {
                        grid[i][j] += grid[i][j-1]; 
                    }
                }
            }
        }
        return grid[grid.length - 1][grid[0].length - 1]; 
    }
    public static void main(String[] args) {
        MinPathSum mps = new MinPathSum(); 
        int[][] grid = {{1,3,1},{1,5,1},{4,2,1}}; 
        System.out.println(mps.minPathSum(grid)); 
    }
}