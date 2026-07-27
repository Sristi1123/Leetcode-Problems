class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int>mp;
        mp[0]=1;
        int preSum=0;
        int count=0;
        for(int x:nums){
            preSum+=x;
            if(mp.find(preSum-k)!=mp.end()){
                count+=mp[preSum-k];
            }
            mp[preSum]++;
        }
        return count;
    }
};