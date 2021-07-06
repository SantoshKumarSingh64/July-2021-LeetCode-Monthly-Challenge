class Solution {
public:
    int minSetSize(vector<int>& arr) {
        map<int,int>m;
        int n = arr.size();
        for(auto x: arr){
            m[x]++;
        }
        
        priority_queue<pair<int,int>>pq;
        for(auto x:m){
            pq.push({x.second,x.first});
        }
        
        int count = 0;
        n = n/2;
        int ans = 0;
        while(count < n){
            count += pq.top().first;
            pq.pop();
            ans++;
        }
        return ans;
    }
};
