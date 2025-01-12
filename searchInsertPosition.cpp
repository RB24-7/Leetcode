int searchInsert(vector<int> &nums, int target)
{
    int sizeOfNums = nums.size();
    for (int i = 0; i < sizeOfNums; i++)
    {
        if (nums[i] >= target)
        {
            return i;
        }
    }
    return sizeOfNums;
}