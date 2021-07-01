class Solution:
    def grayCode(self, n: int) -> List[int]:
        ans = [0]
        if n == 0:
            return ans
        ans.append(1)
        count = 1
        for x in range(2,n+1):
            count = count*2
            
            s = len(ans)
            for j in range(s-1,-1,-1):
                ans.append(count+ans[j]);
        return ans
            
        
