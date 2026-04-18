class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n=nums.size();
        vector<bool> visit(n+2,false);
        for(int i=0;i<n;i++){
            if(nums[i]>=1 && nums[i]<=n+1){
                visit[nums[i]]=true;
            }
        }
        for(int i=1;i<n+2;i++){
            if(!visit[i]){
                return i;
            }
        }
        return -1;
    }
};