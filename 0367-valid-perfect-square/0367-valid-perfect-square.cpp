class Solution {
public:
    bool isPerfectSquare(int num) {
        int start=0;
        int end=num;
        while(start<=end){
            int mid=start+(end-start)/2;
            long long x=1ll*mid*mid;
            if(x==num){
                return true;
            }else if(x>num){
                end=mid-1;
            }else{
                start=mid+1;
            }
        }
        return false;
    }
};