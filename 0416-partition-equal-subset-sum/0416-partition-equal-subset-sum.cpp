class Solution {
public:
    int t[201][1001];
    bool check(vector<int>& nums, int sum, int n){
        if(n==0 && sum==0) return true;
        for(int i=0;i<n+1;i++){
            for(int j=0;j<sum+1;j++){
                if(i==0) t[i][j]= false;
                if(j==0) t[i][j]= true;
            }
        }
        for(int i=1;i<n+1;i++){
            for(int j=1;j<sum+1;j++){
                if(nums[i-1]<=j){
                    t[n][j]=t[i-1][j-nums[i-1]] ||t[i-1][j];
                }else{
                    t[n][j]=t[i-1][j];
                }
            }
        }
        return t[n][sum];
    }
    bool isSubset(vector<int>& nums, int sum){
        int n=nums.size();
        return check(nums,sum,n);
    }
    bool canPartition(vector<int>& nums) {
        int sum=0;
        for(int i:nums){
            sum+=i;
        }
        if(sum%2!=0) return false;
        return isSubset(nums,sum/2);
    }
};