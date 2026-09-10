class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> output;
        for (int i{0}; i < nums.size()-1; i++){
            int j{i+1}, k{static_cast<int>(nums.size())-1};
            while (j < k){
                int sum{nums[i]+nums[j]+nums[k]};
                if (sum == 0) {
                    output.push_back({nums[i], nums[j],nums[k]});
                    j++;
                    k--;
                }
                else if (sum > 0) k--;
                else j++;
            }
        }
        sort (output.begin(),output.end());
        auto it = unique(output.begin(),output.end());
        output.erase(it, output.end());
        return output;
    }
};
