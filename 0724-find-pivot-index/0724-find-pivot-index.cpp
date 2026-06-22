class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans;
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            ans.push_back(sum);
        }
        vector<int> res;
        int sum1=0;
        for(int i=n-1;i>=0;i--){
            sum1+=nums[i];
            res.push_back(sum1);
        }
        reverse(res.begin(),res.end());
        for(int i=0;i<n;i++){
            if(ans[i]==res[i]){
                return i;
            }
        }
        return -1;
    }
};