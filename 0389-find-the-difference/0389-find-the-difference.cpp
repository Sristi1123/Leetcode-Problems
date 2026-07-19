class Solution {
public:
    char findTheDifference(string s, string t) {
        int n=s.size();
        int m=t.size();
        char ans=' ';
        if (n==m) return ans;
        unordered_map<char, int> freq;
        for(char i: t){
            freq[i]++;
        }
        for(char i:s){
            freq[i]--;
        }
        for(auto i: freq){
            if(i.second!=0){
                return i.first;
            }
        }
        return ans;
    }
};