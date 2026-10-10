class Solution {
   public:
    int largestRectangleArea(vector<int>& heights) {
        int area{0};
        std::stack<int> indexHeights;
        for (int i{0}; i <= heights.size(); i++) {
            int currHeight = i == heights.size() ? 0 : heights[i];
            while (!indexHeights.empty() && currHeight < heights[indexHeights.top()]){
                int eval = indexHeights.top();
                indexHeights.pop();
                if (indexHeights.empty()){
                    area = std::max(area, heights[eval]*i);
                } else {
                    int width = i - indexHeights.top() -1;
                    area = std::max(area, heights[eval]*width);
                }
            }
            indexHeights.push(i);
        }
        return area;
    }
};
