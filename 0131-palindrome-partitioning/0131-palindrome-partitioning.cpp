class Solution {
public:
    int p[1001][1001];
    bool isPalindrome(string &s, int i, int j) {
        if (p[i][j] != -1) return p[i][j]; // already computed!
        int l = i, r = j;
        while (l <= r) {
            if (s[l] != s[r]) return p[i][j] = 0;
            l++; r--;
        }
        return p[i][j] = 1;
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
        memset(p, -1, sizeof(p));
        vector<vector<string>> ans;
        vector<string> path;
        solve(s,0,ans, path);
        return ans;
    }
};