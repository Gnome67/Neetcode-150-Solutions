class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        stack<pair<int, int>> stk;
        vector<int> answer(n);
        for(int i = 0; i < n; i++)
        {
            int currentDay = i;
            int currentTemp = temperatures[i];

            while(!stk.empty() && stk.top().second < currentTemp)
            {
                int previousDay = stk.top().first;
                int previousTemp = stk.top().second;
                stk.pop();
                answer[previousDay] = currentDay - previousDay;
            }
            stk.push({currentDay, currentTemp});
        }
        return answer;
    }
};
