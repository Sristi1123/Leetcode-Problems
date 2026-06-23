class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int a=n;
        for(int i=0;i<n;i++){
            if(i!=nums[i]){
                a=i;
                break;
            }
        }
        return a;
    }
};