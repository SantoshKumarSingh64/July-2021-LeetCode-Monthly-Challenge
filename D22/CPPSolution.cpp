class Solution {
public:
    int partitionDisjoint(vector<int>& nums) {
        
        int n = nums.size();
        
        vector<int>left_max(n);
        vector<int>right_min(n);
        
        int m = INT_MIN;
        for(int i=0;i<n;i++){
            m = max(m,nums[i]);
            left_max[i] = m;
        }
        
        m = INT_MAX;
        for(int i=n-1;i>=0;i--){
            m = min(m,nums[i]);
            right_min[i] = m;
        }
        
        for(int i=1;i<n;i++){
            if(left_max[i-1] <= right_min[i])
                return i;
        }
        return n;
    }
};
