class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        int n=nums.size();
        stack<int> st;
        int x=INT_MIN;     // it stores the second largest value
        for(int i=n-1;i>=0;i--){
            if(nums[i]<x){
                return true;        // if nums[i] is the smallest from the 2nd largest then true
            }
            while(!st.empty() && st.top()<nums[i]){
                x=st.top();
                st.pop();
            }
            st.push(nums[i]);    //st.top() is the largest element 
        }
        return false;
    }
};