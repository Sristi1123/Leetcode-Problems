class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        int topr=0;
        int bottomr=n-1;
        int leftc=0;
        int rightc=m-1;
        vector<int> ans;
        while(topr<=bottomr && leftc<=rightc){
            for(int i=leftc;i<=rightc;i++){
                ans.push_back(matrix[topr][i]);
            }
            topr++;
            for(int j=topr;j<=bottomr;j++){
                ans.push_back(matrix[j][rightc]);
            }
            rightc--;
            if (topr <= bottomr){
                for(int i=rightc;i>=leftc;i--){
                    ans.push_back(matrix[bottomr][i]);
                }
            }
            bottomr--;
            if (leftc <= rightc) {
                for(int j=bottomr;j>=topr;j--){
                    ans.push_back(matrix[j][leftc]);
                }
            }
            leftc++;
        }
        return ans;
    }
};