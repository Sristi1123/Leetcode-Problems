class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        int toprow=0;
        int bottomrow=n-1;
        int leftcol=0;
        int rightcol=m-1;
        vector<int> ans;
        while(leftcol<=rightcol && toprow<=bottomrow){
            for(int i=leftcol;i<=rightcol;i++){
                ans.push_back(matrix[toprow][i]);
            }
            toprow++;
            for(int j=toprow;j<=bottomrow;j++){
                ans.push_back(matrix[j][rightcol]);
            }
            rightcol--;
            if(toprow<=bottomrow){
                for(int i=rightcol;i>=leftcol;i--){
                    ans.push_back(matrix[bottomrow][i]);
                }
                bottomrow--;
            }
            if(leftcol<=rightcol){
                for(int j=bottomrow;j>=toprow;j--){
                    ans.push_back(matrix[j][leftcol]);
                }
                leftcol++;
            }
        }
        return ans;
    }
};