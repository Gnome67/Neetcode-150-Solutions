class Solution {
public:
    int maxArea(vector<int>& height) {
        int answer = 0, left = 0, right = (height.size()-1), middle = 0;
        while(left < right)
        {
            if(height[left] == height[right]) { middle = height[left]; }
            if(height[left] > height[right]) { middle = height[right]; }
            if(height[left] < height[right]) { middle = height[left]; }
            middle = middle * (right - left);
            if(middle > answer) { answer = middle; }
            middle = 0;
            if(height[left] == height[right]) { right--; }
            else if(height[left] < height[right]) { left++; }
            else if(height[left] > height[right]) { right--; }
        }
        return answer;
    }
};
