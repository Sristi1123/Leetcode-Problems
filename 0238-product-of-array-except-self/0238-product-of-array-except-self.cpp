class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> pp(n);
        pp[0]=1;
        for(int i=1;i<n;i++){
            pp[i]=pp[i-1]*nums[i-1];
        }
        vector<int> ss(n);
        ss[n-1]=1;
        for(int i=n-2;i>=0;i--){
            ss[i]=ss[i+1]*nums[i+1];
        }
        vector<int> ans(n);
        for(int i=0;i<n;i++){
            ans[i]=pp[i]*ss[i];
        }
        return ans;
    }
};