class Solution {
    public int orangesRotting(int[][] grid) {
        int minutes=5;

        boolean rotten=false;
        while(true){
            for(int i=0;i<grid.length;i++){
                for(int j=0;j<grid[i].length;j++){
                    if(grid[i][j]==minutes-1) grid[i][j]=2;
                    if(grid[i][j]!=2) continue;
                    
                    if(i-1>=0 && grid[i-1][j]==1){
                        grid[i-1][j]=minutes;
                        rotten=true;
                    }
                    if(i+1<grid.length && grid[i+1][j]==1){
                        grid[i+1][j]=minutes;
                        rotten=true;
                    }
                    if(j-1>=0 && grid[i][j-1]==1){
                        grid[i][j-1]=minutes;
                        rotten=true;
                    }
                    if(j+1<grid[i].length && grid[i][j+1]==1){
                        grid[i][j+1]=minutes;
                        rotten=true;
                    }

                    //System.out.print(grid[i][j]);
                }
                //System.out.println();
            }

            if(rotten) minutes++;
            else break;

            rotten=false;
        }

        //check if theres any fresh orange left
        for(int i=0;i<grid.length;i++){
            for(int j=0;j<grid[i].length;j++){
                if(grid[i][j]==1) return -1;
            }
        }


        return minutes-5;
    }
}
