class Solution {
public:
    bool isAnagram(string s, string t) {
        int n=s.length();
        int m=t.length();
        if(n!=m) return false;
        vector<int> freq(26,0);
        for(char i:s){
            freq[i-'a']++;
        }
        for(char i:t){
            freq[i-'a']--;
        }
        for(int x:freq){
            if(x!=0) return false;
        }
        return true;
    }
};