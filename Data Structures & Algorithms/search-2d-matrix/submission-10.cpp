class Solution {
public:

    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int i{0};
        int width{static_cast<int>(matrix[0].size())};
        int j{(width*static_cast<int>(matrix.size())) - 1};

        while (i <= j){
            int mid{i + (j -i)/ 2};

            if (target == matrix[mid / width][mid % width]){
                return true;
            } else if (target > matrix[mid / width][mid % width]){
                i = mid +1;
            } else j = mid -1;
        }


        return false;
    }
};
