class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        // int n1 = nums1.size(), n2 = nums2.size(), counter1 = 0, counter2 = 0;
        // int total = n1 + n2, sum = 0;
        // vector<int> merged;
        // double answer = 0.00;
        // while(counter1 != n1 || counter2 != n2)
        // {
        //     if(nums1[counter1] < nums2[counter2])
        //     {
        //         merged.push_back(nums1[counter1]);
        //         counter1++;
        //     }
        //     if(nums2[counter2] < nums1[counter1])
        //     {
        //         merged.push_back(nums1[counter1]);
        //         counter2++;
        //     }
        // }
        // if(counter1 != n1) { for(int x = counter1; x < n1; x++) { merged.push_back(nums1[x]); } }
        // if(counter2 != n2) { for(int y = counter2; y < n2; y++) { merged.push_back(nums2[y]); } }
        // for(int z = 0; z < total; z++) { sum += merged[z]; }
        // answer = (sum / total);
        // for(int i = 0; i < merged.size(); i++) { cout << merged[i] << endl; }
        // return answer;
        int m = nums1.size(), n = nums2.size();
        if (m > n) { return findMedianSortedArrays(nums2, nums1); }
        int total = m + n, low = 0, high = m;
        double result = 0.0;
        
        while (low <= high)
        {
            int i = low + (high - low) / 2, j = (total + 1) / 2 - i, left1 = (i > 0) ? nums1[i - 1] : INT_MIN, right1 = (i < m) ? nums1[i] : INT_MAX, left2 = (j > 0) ? nums2[j - 1] : INT_MIN, right2 = (j < n) ? nums2[j] : INT_MAX;
            if (left1 <= right2 && left2 <= right1)
            {
                if (total % 2 == 0) { result = (max(left1, left2) + min(right1, right2)) / 2.0; }
                else { result = max(left1, left2); }
                break;
            } else if (left1 > right2) { high = i - 1; }
            else { low = i + 1; }
        }
        return result;
    }
};
