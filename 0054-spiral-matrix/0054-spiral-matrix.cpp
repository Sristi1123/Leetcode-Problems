class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        int lc=0;
        int rc=m-1;
        int tr=0;
        int br=n-1;
        vector<int> ans;
        while(lc<=rc && tr<=br){
            for(int i=lc;i<=rc;i++){
                ans.push_back(matrix[tr][i]);
            }
            tr++;
            for(int j=tr;j<=br;j++){
                ans.push_back(matrix[j][rc]);
            }
            rc--;
            if(tr<=br){
                for(int i=rc;i>=lc;i--){
                    ans.push_back(matrix[br][i]);
                }
                br--;
            }
            if(lc<=rc){
                for(int j=br;j>=tr;j--){
                    ans.push_back(matrix[j][lc]);
                }
                lc++;
            }
        }
        return ans;
    }
};