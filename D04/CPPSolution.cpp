class Solution {

private:
    int MOD = 1e9 + 7;
    vector<vector<int>> g = {
            //a  e  i  o  u
            {0, 1, 0, 0, 0}, // a
            {1, 0, 1, 0, 0}, // e
            {1, 1, 0, 1, 1}, // i
            {0, 0, 1, 0, 1}, // o
            {1, 0, 0, 0, 0} // u
    };

public:
    int countVowelPermutation(int n) {

        vector<vector<int>> dp(5, vector<int>(n, 0));
        for(int i = 0; i < 5; i ++)
            dp[i][n - 1] = 1;

        for(int j = n - 2; j >= 0; j --)
            for(int i = 0; i < 5; i ++){
                for(int k = 0; k < 5; k ++)
                    if(g[i][k])
                        dp[i][j] += dp[k][j + 1], dp[i][j] %= MOD;
            }

        int res = 0;
        for(int i = 0; i < 5; i ++)
            res += dp[i][0], res %= MOD;
        return res;
    }
};
