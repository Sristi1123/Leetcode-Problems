class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m=nums2.size();
        for(int i=0;i<m;i++){
            nums1.push_back(nums2[i]);
        }
        sort(nums1.begin(),nums1.end());
        int n=nums1.size();
        double a=0;
        if(n%2!=0){
            a=nums1[n/2];
        }else{
            a=(nums1[n/2]+nums1[(n/2)-1])/2.0;
        }
        return a;
    }
};