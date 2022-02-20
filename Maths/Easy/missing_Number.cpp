  int missingNumber(vector<int>& nums) {
        int indexSum = 0;
        int valueSum = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            indexSum += i + 1;
            valueSum += nums[i];
        }
        return indexSum - valueSum;
    }

// Using XOR Property

  int missingNumber(vector<int>& nums)
  {
    int res = nums.size();
    for(int i = 0; i < nums.size(); i++)
      res = res ^ i ^ nums[i];

    return res;
  }