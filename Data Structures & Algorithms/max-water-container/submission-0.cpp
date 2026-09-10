class Solution {
public:
    int maxArea(vector<int>& heights) {
        int i{0};
        int j{static_cast<int>(heights.size())-1};
        int max{0};
        while (i != j){
            int currCapacity = (j-i) * min (heights[i], heights[j]);
            if (currCapacity > max) max = currCapacity;
            else if (heights[i] > heights[j]) j--;
            else i++;
        }
        return max;
    }
};
