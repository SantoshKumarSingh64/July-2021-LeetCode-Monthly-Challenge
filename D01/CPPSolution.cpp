class Solution {
public:
    vector<int> grayCode(int n) {
     
        vector<int> ans;
        ans.push_back(0);
        if(n == 0)
            return ans;
        
        ans.push_back(1);
        
        int curr = 1;
        for(int i=2;i<=n;i++)
        {
            curr = curr*2;
            int s = ans.size();
            for(int j=s-1;j>=0;j--)
            {
                ans.push_back(curr+ans[j]);
            }
        }
        return ans;
    }
};
