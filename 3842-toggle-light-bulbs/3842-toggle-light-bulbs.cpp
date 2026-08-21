class Solution {
public:
    vector<int> toggleLightBulbs(vector<int>& bulbs) {
        vector<int> ans;
        unordered_map<int,int> freq;
        for(int i:bulbs){
            freq[i]++;
        }
        for(auto i:freq){
            if((i.second)%2!=0){
                ans.push_back(i.first);
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};