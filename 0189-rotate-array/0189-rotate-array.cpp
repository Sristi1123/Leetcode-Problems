class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        queue<int> q;
        k=k%n;
        for(int i=0;i<n-k;i++){
            q.push(nums[i]);
        }
        vector<int> ans;
        for(int i=n-k;i<n;i++){
            ans.push_back(nums[i]);
        }
        while(!q.empty()){
            ans.push_back(q.front());
            q.pop();
        }
        nums=ans;
    }
};