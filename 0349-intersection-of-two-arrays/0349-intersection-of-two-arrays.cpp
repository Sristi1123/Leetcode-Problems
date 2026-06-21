class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> ans;
        int n=nums1.size();
        int m=nums2.size();
        for (auto i: nums1){
            for(auto j: nums2){
                if(i==j){
                    ans.insert(i);
                }
            }
        }
        vector<int> result(ans.begin(), ans.end());
        return result;
    }
};