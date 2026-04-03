class Solution {
public:
    // int climbStairs(int n) {
    //     if(n <= 2) return n;

    //     int prev2 = 1; // ways(1)
    //     int prev1 = 2; // ways(2)

    //     for(int i = 3; i <= n; i++){
    //         int curr = prev1 + prev2;
    //         prev2 = prev1;
    //         prev1 = curr;
    //     }

    //     return prev1;
    // }
    int t[46];
    int solve(int n){
        if(n<0) return 0;
        if(n==0) return 1;
        if(t[n]!=-1){
            return t[n];
        }
        int one_step=solve(n-1);
        int two_step=solve(n-2);
        return t[n]=one_step+two_step;
    }
    int climbStairs(int n){
        memset(t,-1,sizeof(t));
        return solve(n);
    }
};