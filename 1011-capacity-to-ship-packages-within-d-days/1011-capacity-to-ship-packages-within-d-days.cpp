class Solution {
public:
    bool isValid(vector<int>& arr, int n, int days,int target){
        int cap=1;
        int sum=0;
        for(auto i:arr){
            sum+=i;
            if(sum>target){
                cap++;
                sum=i;
            }
        }
        if(cap>days){
            return false;
        }
        return true;
    }
    int shipWithinDays(vector<int>& arr, int k) {
        int n=arr.size();
        int start=0;
        int end=0;
        for(auto i:arr){
            start=max(i,start);
            end+=i;
        }
        int res=-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(isValid(arr,n,k,mid)==true){
                res=mid;
                end=mid-1;
            }else{
                start=mid+1;
            }
        }
        return res;
    }
};