 bool divisorGame(int n) {
        if(n == 1) return false; //If n=1, there exists no x such that 0< x <1, so no move is possible i.e. game lost
        vector<int> dp(n+1, 0); //We create a vector of size n+1 initialized with 0 (implying false). For each index j of dp, dp[j] tells if Alice won or not (assuming starting value j)
        for(int i = 2; i <= n; i++){
            for(int j = 1; j <= sqrt(i); j++){ //factors of i lie between 1 and sqrt(i)  
                if(i % j == 0 && dp[i-j] == 0) // If j is a factor of i, then Bob gets i-j,so we choose this j only if Bob loses at i-j so that Alice wins.
                    dp[i] = 1; //Alice wins
            }
        }
        if(dp[n] == 1) return true;
        return false;
    }