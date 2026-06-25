class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m=nums2.size();
        vector<int> ans;
        unordered_map<int,int> freq;
        for(auto i: nums1){
            freq[i]++;
        }
        for(auto j:nums2){
            if(freq[j]>0){
                ans.push_back(j);
                freq[j]--;
            }
        }
        return ans;
    }
};