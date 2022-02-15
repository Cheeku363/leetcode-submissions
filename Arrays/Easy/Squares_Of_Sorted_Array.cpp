vector<int> sortedSquares(vector<int>& nums) {
        vector<int> v;
        int sqr = 1;
        int n = nums.size();
        for(int i = 0; i < n; i++){
            sqr = nums[i] * nums[i];
            v.push_back(sqr);
        }
        sort(v.begin(), v.end());
        return v;
    }