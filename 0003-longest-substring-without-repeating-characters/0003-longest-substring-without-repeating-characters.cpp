class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.length();
        if(n==0) return 0;
        int max_count=1;
        for(int i=0;i<n-1;i++){
            int count=1;
            unordered_set<char> st;
            st.insert(s[i]);
            for(int j=i+1;j<n;j++){
                if(st.count(s[j])) break;
                st.insert(s[j]);
                count++;
                if(count>max_count) max_count=count;
            }
        }
        return max_count;
    }
};