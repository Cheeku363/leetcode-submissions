// Using Dynamic Programming

int maxSubArray(vector& nums) {
int n = nums.size();
int dp[n];
memset(dp, 0, sizeof(dp));
int maxi = dp[0] = nums[0];
for(int i=1; i<n; i++){
dp[i] = max(nums[i],nums[i]+dp[i-1]);
maxi = max(dp[i],maxi);
}
return maxi;
}

// Kadane Algorithm
int maxSubArray(vector<int>& nums) {
        int sum = 0, mx = INT_MIN;
        for(int i : nums){
            sum += i;
            mx = max(mx, sum);
            if(sum < 0) sum = 0;
        }
    return mx;
}
