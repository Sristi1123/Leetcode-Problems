class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        //transpose
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int a=matrix[i][j];
                matrix[i][j]=matrix[j][i];
                matrix[j][i]=a;
            }
        }
        //row traversal
        for(int i=0;i<n;i++){
            int start=0;
            int end=n-1;
            while(start<end){
                int a=matrix[i][start];
                matrix[i][start]=matrix[i][end];
                matrix[i][end]=a;
                start++;
                end--;
            }
        }
    }
};