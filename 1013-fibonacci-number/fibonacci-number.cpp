int dp[31];
int fun(int t){
    if(t==0) return 0;
    if(t==1) return 1;
    if(dp[t] != -1) return dp[t];
    return dp[t] = fun(t-1)+fun(t-2);

    
}
class Solution {
public:
    int fib(int n) {
        memset(dp,-1,sizeof(dp));
        return fun(n);
    }
};