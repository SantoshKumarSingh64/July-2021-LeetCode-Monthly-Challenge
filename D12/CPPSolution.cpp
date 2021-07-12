class Solution {
public:
    bool isIsomorphic(string s, string t) {
       
        map<char,char>sm;
        map<char,char>tm;
        int n = s.size();
        int m = t.size();
        if(n != m)
            return false;
        
        for(int i=0;i<n;i++){
            if(tm.find(t[i]) != tm.end()){
                if(tm[t[i]] != s[i])
                    return false;
            }else{
                tm[t[i]] =s[i];
            }
            if(sm.find(s[i]) != sm.end()){
                if(sm[s[i]] != t[i])
                    return false;
            }else{
                sm[s[i]] = t[i];
            }
        }
        return true;
    }
};
