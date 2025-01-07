int removeDuplicates(vector<int> &nums)
{
    if (nums.empty())
    {
        return 0;
    }

    int newIndex = 0;
    int numsSize = nums.size();

    for (int i = 1; i < numsSize; i++)
    {
        if (nums[i] != nums[newIndex])
        {
            newIndex++;
            nums[newIndex] = nums[i];
        }
    }

    return newIndex + 1;
}