class Solution {
public:
    int trap(vector<int>& height) {
        int answer = 0, l = 0, r = height.size()-1, maxL = height[l], maxR = height[r];
        while(l < r)
        {
            if(maxL < maxR)
            {
                l++;
                if(height[l] > maxL) { maxL = height[l]; }
                answer = answer + (maxL - height[l]);
            }
            else
            {
                r--;
                if(height[r] > maxR) { maxR = height[r]; }
                answer = answer + (maxR - height[r]);
            }
        }
        return answer;
    }
};
