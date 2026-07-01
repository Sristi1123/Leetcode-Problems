class Solution {
public:
    bool isAnagram(string s, string t) {
        int n=s.size();
        int m=t.size();
        if(n!=m) return false;
        unordered_map<char,int> freq;
        for(auto i: s){
            freq[i]++;
        }
        for(auto i: t){
            freq[i]--;
        }
        for(auto i: freq){
            if(i.second!=0) return false;
        }
        return true;
    }
};