class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        vector<int> ans;
        int n=grid.size();
        int m=grid[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                ans.push_back(grid[i][j]);
            }
        }
        vector<int> res;
        int x=ans.size();
        k = k % x;
        for(int i=x-k;i<x;i++){
            res.push_back(ans[i]);
        }
        for(int i=0;i<x-k;i++){
            res.push_back(ans[i]);
        }
        
        vector<vector<int>> arr(n, vector<int>(m));
        int y=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                arr[i][j]=res[y++];
            }
        }
        return arr;
    }
};