class Solution {
public:

    string encode(vector<string>& strs) {
        string output;
        for (auto & s : strs){
            output.append(to_string(s.length()));
            output.append("#");
            output.append(s);
        }
        return output;
    }

    vector<string> decode(string s) {
        vector<string> output;
        int i{0};
        while (i < s.size()){
            int j= i;
            while (s[j] != '#') j++;
            int len = stoi(s.substr(i,j-i));
            string word = s.substr(j+1, len);
            output.push_back(word);
            i = j+1 + len;
        }
        return output;
    }
};
