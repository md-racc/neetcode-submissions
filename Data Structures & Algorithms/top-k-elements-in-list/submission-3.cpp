class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> seen;
        for (int &x : nums){
            seen[x]++;
            
        }
        int n = nums.size();
        vector<vector<int>> buckets(n+1);
        for (auto &[value, count]: seen){
            buckets[count].push_back(value);
        }
        vector<int> output;
        for (int i {n}; i>=1 && output.size() < k; i--){
            for (int value: buckets[i]){
                output.push_back(value);
                if (output.size()== k) break;
            }
        }
        return output;
    }
};
