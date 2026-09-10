class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int> values;
        for (int x : nums){
            values.insert(x);
        }
        if (nums.size()==1){
            return 1;
        }
        int max{0};
        int currentTotal{0};
        int prev = *values.begin();
        for (const auto&x : values){

            if (x == prev+1){
                currentTotal +=1;
                prev = x;
                
            } else {
                currentTotal = 1;
                prev = x;
            }
            if (currentTotal > max) max = currentTotal;
        }
        return max;
    }
};
