class Solution {
public:
    int climbStairs(int n) {
        if(n<=2) return n;
        vector<int> arr(n+1);
        arr[1]=1;
        arr[2]=2;
        for(int i=3;i<n+1;i++){
            arr[i]=arr[i-1]+arr[i-2];
        }
        return arr[n];
    }
    // int t[46];
    // int solve(int n){
    //     if(n<0) return 0;
    //     if(n==0) return 1;
    //     if(t[n]!=-1){
    //         return t[n];
    //     }
    //     int one_step=solve(n-1);
    //     int two_step=solve(n-2);
    //     return t[n]=one_step+two_step;
    // }
    // int climbStairs(int n){
    //     memset(t,-1,sizeof(t));
    //     return solve(n);
    // }
};