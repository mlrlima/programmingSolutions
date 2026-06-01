class Solution {
    public int numIslands(char[][] grid) {
        int count=0;
        for(int i=0;i<grid.length;i++){
            for(int j=0;j<grid[i].length;j++){
                if(grid[i][j]=='0') continue;

                count++;
                Queue<int[]> q=new LinkedList<>();
                q.offer(new int[]{i,j});
                while(q.size()>0){
                    int[] coor=q.poll();
                    int x=coor[0], y=coor[1];

                    if(grid[x][y]=='0') continue;
                    
                    grid[x][y]='0';

                    if(x-1>=0 && grid[x-1][y]=='1') q.offer(new int[]{x-1,y});
                    if(x+1<grid.length && grid[x+1][y]=='1') q.offer(new int[]{x+1,y});
                    if(y-1>=0 && grid[x][y-1]=='1') q.offer(new int[]{x,y-1});
                    if(y+1<grid[i].length && grid[x][y+1]=='1') q.offer(new int[]{x,y+1});
                }
            }
        }

        return count;
    }
}
