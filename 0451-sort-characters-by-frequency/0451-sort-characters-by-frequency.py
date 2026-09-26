from collections import Counter
class Solution:
    def frequencySort(self, s: str) -> str:
        n=len(s)
        s=list(s)
        res=Counter(s)
        ans=sorted(res,key=res.get,reverse=True)
        result=""
        for ch in ans:
            result+=ch*res[ch]
        return ''.join(result)