class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n=gain.size();
        vector<int> ans;
        ans.push_back(0);
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=gain[i];
            ans.push_back(sum);
        }
        int a=INT_MIN;
        for(int i=0;i<n+1;i++){
            if(ans[i]>a){
                a=ans[i];
            }
        }
        return a;
    }
};