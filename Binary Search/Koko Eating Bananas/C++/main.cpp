class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int l = 1, r = 0;
        for(int x = 0; x < piles.size(); x++) { r = max(r, piles[x]); }
        int answer = r;
        while(l <= r)
        {
            int k = l + (r - l) / 2;
            long int hours = 0;
            for(int i = 0; i < piles.size(); i++) { hours += ceil((double) piles[i] / k); }
            if(hours <= h)
            {
                answer = min(answer, k);
                r = k - 1;
            } else { l = k + 1; }
        }
        return answer;
    }
};
