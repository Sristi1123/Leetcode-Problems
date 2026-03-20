class Solution {
public:
    // bool check(stack<char> &st, string &part, int m){
    //     stack<char> s=st;
    //     for(int i=m-1;i>=0;i--){
    //         if(s.top()!=part[i]){
    //             return false;
    //         }
    //         s.pop();
    //     }
    //     return true;
    // }
    string removeOccurrences(string s, string part) {
        // --> Approach 1
        // while(true){
        //     int idx=s.find(part);
        //     if(idx==string::npos){
        //         break;
        //     }
        //     s.erase(idx,part.length());
        // }
        // return s;

        // --> Approach 2
        // stack<char> st;
        // int n=s.length();
        // int m=part.length();
        // for(int i=0;i<n;i++){
        //     st.push(s[i]);

        //     if(st.size()>=m && check(st,part,m)==true){
        //         for(int j=0;j<m;j++){
        //             st.pop();
        //         }
        //     }
        // }
        // string res="";
        // while(!st.empty()){
        //     res.push_back(st.top());
        //     st.pop();
        // }
        // reverse(res.begin(),res.end());
        // return res;

        // --> Approach 3
        string res="";
        int n=part.length();
        for(char &c: s){
            res.push_back(c);

            if(res.length()>=n && res.substr(res.length()-n)==part){
                res.erase(res.length()-n);
            }
        }
        return res;
    }
};