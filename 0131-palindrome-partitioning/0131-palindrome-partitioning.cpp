class Solution {
public:
    bool isPalindrome(string &s, int i, int j){
        while(i<=j){
            if(s[i]!=s[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
    void solve(string &s, int i, vector<vector<string>> &ans,vector<string> &path){
        if(i == s.length()){
            ans.push_back(path);
            return;
        }

        for(int k = i; k < s.length(); k++){
            if(isPalindrome(s, i, k)){
                path.push_back(s.substr(i, k - i + 1));
                solve(s, k + 1, ans, path);
                path.pop_back(); 
            }
        }
    }
    vector<vector<string>> partition(string s) {
        int n=s.length();
        vector<vector<string>> ans;
        vector<string> path;
        solve(s,0,ans, path);
        return ans;
    }
};