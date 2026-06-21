class Solution {
public:
    bool isAnagram(string s, string t) {
        int n=s.length();
        int m=t.length();
        if(n!=m) return false;
        unordered_map<char,int>freq(n);
        for(char ch:s){
            freq[ch]++;
        }
        for(char c:t){
            freq[c]--;
        }
        for(auto it:freq){
            if(it.second!=0){
                return false;
            }
        }
        return true;
    }
};