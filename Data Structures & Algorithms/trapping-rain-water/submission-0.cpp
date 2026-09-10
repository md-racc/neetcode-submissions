class Solution {
public:
    int trap(vector<int>& height) {
        vector<int> pref(height.size());
        vector<int> suff(height.size());
        pref[0] = height[0];
        suff[height.size()-1] = height[height.size()-1];
        for (int i{1}; i < height.size(); i++){
            if (height[i] > pref[i-1]) pref[i] = height[i];
            else pref[i] = pref[i-1];
        }
        for (int i{static_cast<int>(height.size()) -2}; i >= 0; i--){
            if (height[i] > suff[i+1]) suff[i] = height[i];
            else suff[i] = suff[i+1];
        }
        int total{0};
        for (int i{0}; i < static_cast<int>(height.size()); i++){
            int curr = min(pref[i],suff[i]) - height[i];
            if (curr >= 0) total+= curr;
        
        }
        return total;
    }
};
