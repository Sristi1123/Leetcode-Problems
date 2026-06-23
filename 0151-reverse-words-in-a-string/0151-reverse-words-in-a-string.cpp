class Solution {
public:
    string reverseWords(string s) {
        int n=s.length();
        string ans="";
        reverse(s.begin(),s.end());
        for(int i=0;i<n;i++){
            while(i<n && s[i]==' '){
                i++;
            }
            string a="";
            while(i<n && s[i]!=' '){
                a+=s[i];
                i++;
            }
            reverse(a.begin(),a.end());
            if(!a.empty()){
                if(!ans.empty()) ans += " ";
                ans+=a;
            }
        }
        return ans;
    }
};