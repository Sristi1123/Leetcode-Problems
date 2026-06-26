class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        int mini=0;
        for(auto i:nums){
            sum+=i;
            if(sum<mini){
                mini=sum;
            }
        }
        return 1-mini;
    }
};