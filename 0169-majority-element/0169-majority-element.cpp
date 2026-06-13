class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int> freq;
        for(auto i:nums){
            freq[i]++;
        }
        int a=n/2;
        for(auto x: freq){
            if(x.second>a){
                return x.first;
            }
        }
        return 0;
    }
};