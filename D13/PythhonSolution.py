class Solution:
    def findPeakElement(self, nums: List[int]) -> int:
        
        n = len(nums)
        if n == 1:
            return 1
        
        low = 0
        high = n-1
        
        while low < high:
            
            mid = low + (high-low)//2
            
            if nums[mid] < nums[mid+1]:
                low = mid+1
            else:
                high = mid
        return low
        
