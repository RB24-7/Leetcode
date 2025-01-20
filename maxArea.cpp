int maxArea(vector<int>& height) {
    int left = 0;
    int right = height.size() - 1;

    int maxArea = 0;

    while (left < right) {
        int width = right - left; 
        int h = height[left] < height[right] ? height[left] : height[right]; 
        maxArea = max(maxArea, h * width); 

        if (height[left] < height[right]) {
            left++;
        } else {
            right--;
        }
    }

    return maxArea;
}
