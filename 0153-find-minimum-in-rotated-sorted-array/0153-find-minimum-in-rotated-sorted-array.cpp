class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size();
        int pivot=-1;
        for(int i=0;i<n-1;i++){
            if(nums[i]>nums[i+1]){
                pivot=nums[i+1];
                break;
            }
        }
        if(pivot==-1) pivot=nums[0];
        return pivot;
    }
};