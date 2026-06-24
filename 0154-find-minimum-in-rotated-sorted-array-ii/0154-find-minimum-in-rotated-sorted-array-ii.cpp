class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size();
        int pivot=-1;
        for(int i=0;i<n-1;i++){
            if(nums[i]>nums[i+1]){
                pivot=i;
                break;
            }
        }
        int ans=0;
        if(pivot==-1){
            pivot=n-1;
            ans=nums[0];
        } else{
            ans=nums[pivot+1];
        }
        return ans;
    }
};