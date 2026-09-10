class Solution {
 public:
  vector<int> twoSum(vector<int>& numbers, int target) {
    int i{0}, j{static_cast<int>(numbers.size()) - 1};
    while (i < j) {
      if (numbers[i] + numbers[j] == target) {
        break;
      } else if (numbers[i] + numbers[j] > target) {
        j--;
      } else {
        i++;
      }
    }
    vector<int> output = {i+1, j+1};
    return output;
  }
};
