class Solution:
    def findClosestElements(self, arr: List[int], k: int, x: int) -> List[int]:
        
        high = len(arr)-1
        low = 0
        
        while high-low >= k:
            if abs(arr[low]-x) <= abs(arr[high]-x):
                high -= 1
            else:
                low += 1
        
        return arr[low:high+1]
        
