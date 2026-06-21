class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int> freq(n);
        for(auto i:nums){
            freq[i]++;
        }
        for(auto j:freq){
            if(j.second>1){
                return j.first;
            }
        }
        return 0;
    }
};