class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> vals;
        for (int x : nums){
            vals.insert(x);
        }
        int max{0};
        for (int i{0}; i < nums.size(); i++){
            if (vals.find(nums[i]-1) == vals.end()){
                int count{0};
                while (vals.find(nums[i]+count) != vals.end()){
                    count++;
                }
                if (count > max) max = count;
            }
        }
        return max;
    }
};
