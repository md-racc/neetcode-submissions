class Solution {
public:
    string encode(vector<string>& strs) {
        string output;
        for (string s : strs){
            output += to_string(s.length());
            output += "#";
            output += s;
        }
        return output;
    }

    vector<string> decode(string s) {
        int i{0};
        vector<string> output;
        while (i < s.size()){
            int j{i};
            while (s[j] != '#') j++;
            int length = stoi(s.substr(i, j-i));
            output.push_back(s.substr(j+1, length));
            i =j+1+length;
        }
        return output;
    }
};
