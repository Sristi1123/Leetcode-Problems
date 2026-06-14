class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        int req=0;
        for(int i=0;i<n;i++){
            req=target-nums[i];
            for(int j=i+1;j<n;j++){
                if(req==nums[j]){
                    return {i,j};
                }
            }
        }
        return {-1,-1};
    }
};