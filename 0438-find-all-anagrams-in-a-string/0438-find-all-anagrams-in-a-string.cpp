class Solution {
public:
    bool allZero(vector<int> &freq){
        for(int &i:freq){
            if(i!=0) return false;
        }
        return true;
    }
    vector<int> findAnagrams(string s, string p) {
        int n=s.length();
        int m=p.length();
        vector<int> freq(26,0);
        for(char i:p){
            freq[i-'a']++;
        }
        int i=0;
        int j=0;
        int count=0;
        vector<int> res;
        while(j<n){
            freq[s[j]-'a']--;
            if(j-i+1==m){
                if(allZero(freq)){
                    count++;
                    res.push_back(i);
                }
                freq[s[i]-'a']++;
                i++;
            }
            j++;
        }
        return res;
    }
};