[2~  int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        int left_sum = 0, right_sum = 0;
        for(int it: nums){
            right_sum += it;
        }
        for(int i = 0; i < n; i++){
            right_sum = right_sum - nums[i];
            
            if(right_sum == left_sum) return i;
            
            left_sum += nums[i];
        }
        return -1;
    }
