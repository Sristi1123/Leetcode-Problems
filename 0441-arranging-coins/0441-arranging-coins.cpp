class Solution {
public:
    int arrangeCoins(int n) {
        int count=0;
        int diff=0;
        int a=0;
        for(int i=1;i<=n;i++){
            a=n-i;
            diff=n-a;
            if(diff==i){
                count++;
            }
            n=n-i;
        } 
        return count;
    }
};