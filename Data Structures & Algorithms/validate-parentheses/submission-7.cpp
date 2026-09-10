class Solution {
public:
    bool isValid(string s) {
        unordered_map<char,char> pairs;
        pairs[']'] = '[';
        pairs[')'] = '(';
        pairs['}'] = '{';
        stack<char> seen;
        for (char c : s){
            if (pairs.contains(c)){
                if (seen.empty()) return false;
                else if (pairs[c] == seen.top()) seen.pop();
                else return false;
            } else {
                seen.push(c);
            }
        }
        return seen.empty();
    }
};
