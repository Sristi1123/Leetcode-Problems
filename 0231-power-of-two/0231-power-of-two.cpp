class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0) return false;
        for(int i=0;i<=31;i++){
            int x=1<<i;
            if(x==n) return true;
        }
        return false;
    }
};