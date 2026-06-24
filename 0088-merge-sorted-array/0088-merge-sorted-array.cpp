class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        // int i=n-1;
        // int j=m-1;
        // while()
        stack<int> st;
        int i=0;
        while(i<m){
            st.push(nums1[i]);
            i++;
        }
        int j=0;
        while(j<n){
            st.push(nums2[j]);
            j++;
        }
        vector<int> ans;
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        sort(ans.begin(),ans.end());
        for(int i=0;i<n+m;i++){
            nums1[i]=ans[i];
        }
    }
};