typedef long long ll;
ll m = 1000000000+7;

int countBSTHelper(int n, ll *&dp){
    if(n == 0 || n==1){
       return 1;
    }
    if(dp[n] > 0){
        return dp[n+1];
    }
    ll possibilities = 0; 
          
        for (int i = 0; i < n; i++) // for each root 
        { 
            if (dp[i] == 0) 
                dp[i] = countBSTHelper(i, dp); // compute all possible BSTs in its left-subtree 
                  
            if (dp[n-1-i] == 0) 
                dp[n-1-i] = countBSTHelper(n-1-i, dp); // compute all possible BSTs in its left-subtree 
              
            possibilities += (dp[i]*dp[n-1-i])%m; // multiply these two values and add to total 
        }  
          
    return possibilities%m; 
} 

int countBST( int n)
{
  /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input and printing output is handled automatically.
     */
    ll *dp = new ll[n+1]();
    return countBSTHelper(n,dp);
}
