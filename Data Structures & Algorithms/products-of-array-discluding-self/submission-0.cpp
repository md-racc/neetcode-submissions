class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> outputs;
        vector<int> pre;
        vector<int> suff(nums.size());
        pre.push_back(1);
        for (int i{1}; i < nums.size();i++){
            pre.push_back(nums[i-1]*pre[i-1]);
        }
        suff[nums.size()-1] = 1;
        for (int i{static_cast<int>(nums.size()-2)}; i >=0; i--){
            suff[i] = suff[i+1] * nums[i+1];
        }
        for (int i{0}; i < nums.size(); i++){
            outputs.push_back(pre[i]*suff[i]);
        }
        return outputs;
    }
};
