class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> seen;
        for (int &x : nums){
            seen[x]++;
            
        }
        vector<pair<int,int>> dump;
        for (auto &[value, count] : seen){
            dump.push_back({value,count});
        }
        sort(dump.begin(),dump.end(), [](const pair<int,int>&a, const pair<int,int>&b){return a.second > b.second;});
        
        vector<int>output;
        for (int i = 0; i < k; i++){
            output.push_back(dump[i].first);
        }
        return output;
    }
};
