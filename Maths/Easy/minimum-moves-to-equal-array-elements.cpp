int minMoves(vector<int>& nums) {
    int mini = INT_MAX, ans = 0;
        
        //Find least element
    for (int it : nums){
        if(it < mini) mini = it;
    }
        
        //Add all the excess values for the answer
    for (int it : nums){
        ans += (it - mini);
    }
        
    return ans;
}