int findKthLargest(vector<int>& nums, int k) {
    int sizeOfNums = nums.size();
    priority_queue<int, vector<int>, greater<int>> priorityQueue;
        
    for (int num : nums) 
    {
        priorityQueue.push(num);
        if(priorityQueue.size() > k)
        {
            priorityQueue.pop();        
        }
    }
        
    return priorityQueue.top();
}