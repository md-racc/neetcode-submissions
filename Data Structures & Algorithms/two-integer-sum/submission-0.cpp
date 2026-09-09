class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> seen;
        for (int i{0}; i < nums.size(); i++){
            int comp = target - nums[i];
            if (seen.find(comp) != seen.end()){
                vector<int> soln = {seen[comp], i};
                return soln;
            } else {
                seen[nums[i]] = i; 
            }
        }
        vector<int>soln;
        return soln;
    }

};
