class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n=nums.size();
        int pivot=n-1;
        for(int i=0;i<n-1;i++){
            if(nums[i]>nums[i+1]){
                pivot=i;
                break;
            }
        }
        return pivot;
    }
};