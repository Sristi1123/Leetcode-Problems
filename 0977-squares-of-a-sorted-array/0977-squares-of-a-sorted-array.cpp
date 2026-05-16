class Solution {
public:
    vector<int> sortedSquares(vector<int>& arr) {
        int n=arr.size();
        int left=0;
        vector<int> ans(n);
        int right=n-1;
        int pos=n-1;
        while(left<=right){
            if(abs(arr[left])>abs(arr[right])){
                ans[pos]=arr[left]*arr[left];
                left++;
            }else{
                ans[pos]=arr[right]*arr[right];
                right--;
            }
            pos--;
        }
        return ans;
   }
};