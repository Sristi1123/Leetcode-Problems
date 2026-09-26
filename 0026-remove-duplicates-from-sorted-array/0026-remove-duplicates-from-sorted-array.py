class Solution:
    def removeDuplicates(self, nums: list[int]) -> int:
        ans=[]
        for x in nums:
            if x not in ans:
                ans.append(x)
        for i in range(len(ans)):
            nums[i]=ans[i]
        return len(ans)