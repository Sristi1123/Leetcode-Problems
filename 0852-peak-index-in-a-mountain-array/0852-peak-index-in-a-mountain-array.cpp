class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n=arr.size();
        int pivot=-1;
        for(int i=0;i<n-1;i++){
            if(arr[i]>arr[i+1]){
                pivot=i;
                break;
            }
        }
        return pivot;
    }
};