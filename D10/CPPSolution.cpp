class Solution {
public:
    int decodeChar(char c){
        if(c == '*'){
            return 9;
        }
        else if(c == '0'){
            return 0;
        }
        return 1;
    }
    
    int decodeTwoChars(char first, char second){
        if(first == '*'){
            if(second == '*'){
                return 15;
            }else if(second >= '0' && second <= '6'){
                return 2;
            }
            else
                return 1;
            
        }else if(first == '1'){
            if(second == '*'){
                return 9;
            }else{
                return 1;
            }
            
        }else if(first == '2'){
            if(second == '*'){
                return 6;
            }
            else if(second >= '0' && second <= '6'){
                return 1;
            }
            else
                    return 0;
        }else{
            return 0;
        }
        
    }
    
    int numDecodings(string s) {
        
        int n =s.size();
        vector<long long>dp(n+1,0);
        dp[0] = 1;
        dp[1] = decodeChar(s[0]);
        
        for(int i=2;i<=n;i++){
            char prevChar = s[i-2];
            char currChar = s[i-1];
            
            dp[i] += dp[i-1]*decodeChar(currChar);
            dp[i] += dp[i-2]*decodeTwoChars(prevChar,currChar);
            
            dp[i] = dp[i]%1000000007;
        }
        
        return (int)dp[n];
        
    }
};
