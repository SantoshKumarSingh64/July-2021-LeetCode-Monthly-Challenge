class Solution {
public:
    
    int binarySearch(vector<int> temp, int n, int x){
        int low = 0;
        int high = n;
        
        while(low <= high){
            int mid = low+(high-low)/2;
            
            if(temp[mid] == x){
                return mid;
            }
            if(temp[mid] < x){
                low = mid+1;
            }
            else{
                high = mid-1;
            }
        }
        return low;
    }
    
    
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        if(n == 0){
            return 0;
        }
        vector<int>temp;
        temp.push_back(nums[0]);
        int ans = 1;
        for(int i=1;i<n;i++){
            if(temp[ans-1] == nums[i]){
                continue;
            }
            if(temp[ans-1] < nums[i]){
                temp.push_back(nums[i]);
                ans++;
            }
            else{
                int index = binarySearch(temp,ans-1,nums[i]);
                temp[index] = nums[i];
            }
        }
        
        return ans;
    }
};
