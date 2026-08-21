class Solution {
public:
    int digitFrequencyScore(int n) {
        vector<int> ans;
        while(n>0){
            int rem=n%10;
            ans.push_back(rem);
            n/=10;
        }
        unordered_map<int,int> freq;
        for(int i:ans){
            freq[i]++;
        }
        int sum=0;
        for(auto i:freq){
            sum+=i.first*i.second;
        }
        return sum;
    }
};