//  We can use Two Pointer Approach
    void moveZeroes(vector<int>& nums) {
        int i = 0, j = 0;
        int n = nums.size();
        while(j < n){
            if(nums[j] != 0)
                swap(nums[i++], nums[j++]);
            else
                j++;
        }
    }