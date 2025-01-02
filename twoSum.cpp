  vector<int> twoSum(vector<int>& nums, int target) {
        int sizeOfNums = nums.size();
        unordered_map <int , int> numMap;

        for(int i = 0; i < sizeOfNums; i ++) 
        {
            int complement = target - nums[i];
            if (numMap.count(complement)) 
            {
                return {numMap[complement], i};
            }
            numMap[nums[i]] = i;
        }
        return {};
    }