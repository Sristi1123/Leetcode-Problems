// class Solution {
// public:
//     long long t[1001][5001];
//     long long helper(vector<int>& coins, int sum, int n){
//         const int MOD=1e9+7;
//         for(int i=0;i<n+1;i++){
//             for(int j=0;j<sum+1;j++){
//                 if(j==0) t[i][j]=1;
//                 else if(i==0) t[i][j]=0;
//             }
//         }
//         for(int i=1;i<n+1;i++){
//             for(int j=1;j<sum+1;j++){
//                 if(coins[i-1]<=j){
//                     t[i][j]=((t[i][j-coins[i-1]])+t[i-1][j])%MOD;
//                 }else{
//                     t[i][j]=t[i-1][j];
//                 }
//             }
//         }
//         return t[n][sum];
//     }
//     int change(int amount, vector<int>& coins) {
//         int n =coins.size();
//         return (int)helper(coins, amount,n);
//     }
// };
class Solution {
public:
    int change(int amount, vector<int>& coins) {
        const long long MOD = 1e9 + 7;  // only needed for out-of-spec test cases
        vector<long long> dp(amount + 1, 0);
        dp[0] = 1;
        
        for (int coin : coins) {
            for (int j = coin; j <= amount; j++) {
                dp[j] += dp[j - coin];
                if (dp[j] > INT_MAX) dp[j] %= MOD;  // ✅ only mod when about to overflow
            }
        }
        return (int)dp[amount];
    }
};