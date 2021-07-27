class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int ans = nums[0]+nums[1]+nums[n-1];
        
        for(int i=0;i<n-2;i++){
            int start = i+1, end = n-1;
            while(start < end){
                int currSum = nums[i]+nums[start]+nums[end];
                if(currSum > target){
                    end--;
                }else{
                    start++;
                }
                
                if(abs(currSum-target) < abs(ans-target)){
                    ans = currSum;
                }
            }
        }
        return ans;
    }
};
