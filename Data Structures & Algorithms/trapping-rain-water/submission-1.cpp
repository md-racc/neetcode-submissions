class Solution {
public:
    int trap(vector<int>& height) {
        int size{static_cast<int>(height.size())};
        int left{0}, right{size -1};
        int leftMax{height[left]}, rightMax{height[right]};
        int total{0};
        while (left <= right){
            if (leftMax < rightMax){
                if (height[left] > leftMax){
                    leftMax = height[left];
                } else {
                    total += leftMax -height[left];
                }
                left++;
            } else{
                if (height[right] > rightMax){
                    rightMax = height[right];
                } else {
                    total += rightMax -height[right];
                }
                right--;
            }
        }
        return total;
    }
};
