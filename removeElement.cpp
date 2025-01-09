int removeElement(vector<int> &nums, int val)
{
    int newIndex = 0;
    int numsSize = nums.size();

    for (int i = 0; i < numsSize; i++)
    {
        if (nums[i] != val)
        {
            if (i != newIndex)
            {
                nums[newIndex] = nums[i];
            }
            newIndex++;
        }
    }
    return newIndex;
}