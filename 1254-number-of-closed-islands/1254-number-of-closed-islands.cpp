class Solution {
public:

    void dfs(vector<vector<int>>& grid, int row, int col){

        int n = grid.size();
        int m = grid[0].size();
        if(row<0 || row>=n ||col<0 ||col>=m){
            return;
        }
        if(grid[row][col]==1){
            return;
        }
        grid[row][col]=1;
        dfs(grid,row-1,col);
        dfs(grid,row,col-1);
        dfs(grid,row+1,col);
        dfs(grid,row,col+1);
    }

    int closedIsland(vector<vector<int>>& grid) {

        int n = grid.size();
        int m = grid[0].size();

        for(int i=0;i<n;i++){

            if(grid[i][0] == 0)
                dfs(grid,i,0);

            if(grid[i][m-1] == 0)
                dfs(grid,i,m-1);
        }

        for(int j=0;j<m;j++){

            if(grid[0][j] == 0)
                dfs(grid,0,j);

            if(grid[n-1][j] == 0)
                dfs(grid,n-1,j);
        }
        int count = 0;

        for(int i=1;i<n-1;i++){

            for(int j=1;j<m-1;j++){

                if(grid[i][j] == 0){

                    count++;
                    dfs(grid,i,j);
                }
            }
        }

        return count;
    }
};