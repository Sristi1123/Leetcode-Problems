class Solution {
public int majorityElement(int[]nums) {
        int n=nums.length;
        int ans=0;
        HashMap<Integer, Integer>freq=new HashMap<>();
        for(int i:nums){
            freq.put(i,freq.getOrDefault(i,0)+1);
        }
        for(Map.Entry<Integer,Integer> i:freq.entrySet()){
            if( i.getValue()>n/2){
                ans=i.getKey();
            }
        }
        return ans;
    }
}