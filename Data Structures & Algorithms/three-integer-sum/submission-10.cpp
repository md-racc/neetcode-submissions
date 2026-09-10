class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> output;
        int end = static_cast<int>(nums.size()) -1;
        for (int i{0}; i <= end; i++){
            if (i > 0 && nums[i] == nums[i-1]) continue;
            int j{i+1}, k{end};
            while (j < k){
                int sum{nums[i]+nums[j]+nums[k]};
                if (sum == 0){
                    output.push_back({nums[i],nums[j],nums[k]});
                    while (j < k && nums[j] == nums[++j]);
                    while (j < k && nums[k] == nums[--k]);
                } else if (sum > 0) k--;
                else j++;
            }
        } 
        return output;
    }
};
