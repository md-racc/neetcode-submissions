class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> processed;
        for (int i{0}; i < strs.size(); i++){
            string s = strs[i];
            sort(s.begin(), s.end());
            if (processed.find(s) != processed.end()){
                processed[s].push_back(strs[i]);
            } else {
                processed[s].push_back(strs[i]);
            }
        }
        vector<vector<string>> output;
        for (auto &[sorted, groups] : processed){
            output.push_back(groups);
        }
        return output;
    }
};
