class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        int n=nums1.size();
        int m=nums2.size();
        unordered_map<int,int> freq;
        unordered_map<int,int> freq1;
        for(auto i: nums1){
            freq[i]++;
        }
        for(auto i: nums2){
            freq1[i]++;
        }
        for(auto i:freq){
            for(auto j:freq1){
                if(i.first==j.first){
                    ans.push_back(i.first);
                }
            }
        }
        return ans;
    }
};