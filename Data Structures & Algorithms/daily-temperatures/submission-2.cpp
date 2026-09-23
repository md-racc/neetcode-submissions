class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> result(temperatures.size(), 0);
        stack<pair<int,int>> seen; //temp, index
        for (int i{0}; i < temperatures.size(); i++){
            int t = temperatures[i];
            while (!seen.empty() && t > seen.top().first){
                auto day = seen.top();
                seen.pop();
                result[day.second] = i - day.second;
            }
            seen.push({t,i});
        }
        return result;
    }
};
