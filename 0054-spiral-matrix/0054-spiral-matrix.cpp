class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        vector<int> ans;
        int topRow=0;
        int bottomRow=n-1;
        int leftCol=0;
        int rightCol=m-1;
        while(topRow<=bottomRow && leftCol<=rightCol){
            for(int i=leftCol;i<=rightCol;i++){
                ans.push_back(matrix[topRow][i]);
            }
            topRow++;
            for(int i=topRow;i<=bottomRow;i++){
                ans.push_back(matrix[i][rightCol]);
            }
            rightCol--;
            if (topRow <= bottomRow){
                for(int i=rightCol;i>=leftCol;i--){
                    ans.push_back(matrix[bottomRow][i]);
                }
                bottomRow--;
            }
            if (leftCol <= rightCol) {
                for (int i = bottomRow; i >= topRow; i--) {
                    ans.push_back(matrix[i][leftCol]);
                }
                leftCol++;
            }
        }
        return ans;
    }
};