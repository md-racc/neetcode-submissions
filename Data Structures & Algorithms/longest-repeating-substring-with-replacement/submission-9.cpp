class Solution {
public:
    int characterReplacement(string s, int k) {
        int l{0};
        int max{0};
        int maxFreq{0};
        map<char,int> seen;
        for (int r{0}; r < s.size(); r++){
            seen[s[r]]++;
            maxFreq = std::max(maxFreq, seen[s[r]]);
            while (r-l + 1 - maxFreq > k){
                seen[s[l]]--;
                l++;
            }

            max = std::max(max, r-l +1);
        }
        return max;
    }
};



// Y Y X X X Y 
// l
//     