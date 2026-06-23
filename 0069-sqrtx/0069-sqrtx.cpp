class Solution {
public:
    int mySqrt(int x) {
        int start=0;
        int end=x;
        while(start<=end){
            int mid=start+(end-start)/2;
            long a=(long)mid*mid;
            if(a>x){
                end=mid-1;
            }else{
                start=mid+1;
            }
        }
        return start-1;
    }
};