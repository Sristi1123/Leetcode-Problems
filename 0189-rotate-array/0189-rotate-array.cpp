class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k%=n;
        //complete reverse --> 7 6 5 4 3 2 1 
        reverse(nums.begin(),nums.end());
        // reverse till k --> 5 6 7 4 3 2 1
        reverse(nums.begin(),nums.begin()+k);
        // reverse after k --> 5 6 7 1 2 3 4
        reverse(nums.begin()+k,nums.end());
    }
};