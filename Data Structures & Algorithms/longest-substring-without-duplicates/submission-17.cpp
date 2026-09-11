class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i{0};
        int max{0};
        unordered_set<char> seen;
        for (int j{0}; j < s.size(); j++){
            while (seen.contains(s[j])){
                seen.erase(s[i]);
                i++;
            }
            seen.insert(s[j]);
            max = std::max(max, j-i+1);
        }
        return max;
    }
};
