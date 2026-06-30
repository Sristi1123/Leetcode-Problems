class Solution {
public:
    bool isValid(string s) {
        int n=s.size();
        stack<char> st;
        for(auto ch: s){
            if(ch=='(' || ch=='{' || ch=='['){
                st.push(ch);
            }else{
                if(st.empty()) return false;
                char a=st.top();
                if(a=='(' && ch!=')' || a=='{' && ch!='}' || a=='[' && ch!=']') return false;
                st.pop();
            }
        }
        return st.empty();
    }
};