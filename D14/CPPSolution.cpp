class Solution {
public:
    string customSortString(string order, string str) {
        
        set<char>st;
        
    
        map<char,int>m;
        for(auto x:str){
            m[x]++;
            st.insert(x);
        }
        
        
        
        string ans;
        for(auto x:order){
            for(int i=0;i<m[x];i++){
                ans += x;
            if(st.find(x) != st.end())
                st.erase(x);
            }
        }
        
        
        set<char>::iterator itr;
        for(itr=st.begin();itr!=st.end();itr++){
            for(int i=0;i<m[*itr];i++){
                ans += *itr;
            }
        }
        return ans;
    }
};
