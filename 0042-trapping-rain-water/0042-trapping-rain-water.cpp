class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        stack<int> st;
        int water_stored = 0;

        for (int i=0;i<n; i++) {
            while (!st.empty() && height[i]>height[st.top()]) {
                int bottom = st.top();
                st.pop();
                if (st.empty())
                    break;
                int left = st.top();
                int width = i - left - 1;
                int b_height = min(height[left], height[i]) - height[bottom];
                water_stored += width * b_height;
            }
            st.push(i);
        }
        return water_stored;
    }
};